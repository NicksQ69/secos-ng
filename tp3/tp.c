/* GPLv2 (c) Airbus */
#include <debug.h>
#include <segmem.h>

void print_gdt_content(gdt_reg_t gdtr_ptr) {
    seg_desc_t* gdt_ptr;
    gdt_ptr = (seg_desc_t*)(gdtr_ptr.addr);
    int i=0;
    while ((uint32_t)gdt_ptr < ((gdtr_ptr.addr) + gdtr_ptr.limit)) {
        uint32_t start = gdt_ptr->base_3<<24 | gdt_ptr->base_2<<16 | gdt_ptr->base_1;
        uint32_t end;
        if (gdt_ptr->g) {
            end = start + ( (gdt_ptr->limit_2<<16 | gdt_ptr->limit_1) <<12) + 4095;
        } else {
            end = start + (gdt_ptr->limit_2<<16 | gdt_ptr->limit_1);
        }
        debug("%d ", i);
        debug("[0x%x ", start);
        debug("- 0x%x] ", end);
        debug("seg_t: 0x%x ", gdt_ptr->type);
        debug("desc_t: %d ", gdt_ptr->s);
        debug("priv: %d ", gdt_ptr->dpl);
        debug("present: %d ", gdt_ptr->p);
        debug("avl: %d ", gdt_ptr->avl);
        debug("longmode: %d ", gdt_ptr->l);
        debug("default: %d ", gdt_ptr->d);
        debug("gran: %d ", gdt_ptr->g);
        debug("\n");
        gdt_ptr++;
        i++;
    }
}

void userland() {
   debug("\nExecution Userland ...\n");
   asm volatile ("mov %eax, %cr0");
}

void tp() {
   seg_desc_t my_gdt[3];

   my_gdt[0].raw = 0ULL;
   my_gdt[1].limit_1 = 0xffff;   //:16;     /* bits 00-15 of the segment limit */
   my_gdt[1].base_1 = 0x0000;    //:16;     /* bits 00-15 of the base address */
   my_gdt[1].base_2 = 0x00;      //:8;      /* bits 16-23 of the base address */
   my_gdt[1].type = 11;//Code,RX //:4;      /* segment type */
   my_gdt[1].s = 1;              //:1;      /* descriptor type */
   my_gdt[1].dpl = 3; //ring3    //:2;      /* descriptor privilege level */
   my_gdt[1].p = 1;              //:1;      /* segment present flag */
   my_gdt[1].limit_2 = 0xf;      //:4;      /* bits 16-19 of the segment limit */
   my_gdt[1].avl = 1;            //:1;      /* available for fun and profit */
   my_gdt[1].l = 0; //32bits     //:1;      /* longmode */
   my_gdt[1].d = 1;              //:1;      /* default length, depend on seg type */
   my_gdt[1].g = 1;              //:1;      /* granularity */
   my_gdt[1].base_3 = 0x00;      //:8;      /* bits 24-31 of the base address */
   my_gdt[2].limit_1 = 0xffff;   //:16;     /* bits 00-15 of the segment limit */
   my_gdt[2].base_1 = 0x0000;    //:16;     /* bits 00-15 of the base address */
   my_gdt[2].base_2 = 0x00;      //:8;      /* bits 16-23 of the base address */
   my_gdt[2].type = 3; //data,RW //:4;      /* segment type */
   my_gdt[2].s = 1;              //:1;      /* descriptor type */
   my_gdt[2].dpl = 3; //ring3    //:2;      /* descriptor privilege level */
   my_gdt[2].p = 1;              //:1;      /* segment present flag */
   my_gdt[2].limit_2 = 0xf;      //:4;      /* bits 16-19 of the segment limit */
   my_gdt[2].avl = 1;            //:1;      /* available for fun and profit */
   my_gdt[2].l = 0; // 32 bits   //:1;      /* longmode */
   my_gdt[2].d = 1;              //:1;      /* default length, depend on seg type */
   my_gdt[2].g = 1;              //:1;      /* granularity */
   my_gdt[2].base_3 = 0x00;      //:8;      /* bits 24-31 of the base address */

   gdt_reg_t my_gdtr;
   my_gdtr.addr = (long unsigned int)my_gdt;
   my_gdtr.limit = sizeof(my_gdt) - 1;
   set_gdtr(my_gdtr);

   print_gdt_content(my_gdtr);

   set_ds(gdt_krn_seg_sel(2));
   set_es(gdt_krn_seg_sel(2));
   set_fs(gdt_krn_seg_sel(2));
   set_gs(gdt_krn_seg_sel(2));

   asm volatile(
      "push %%eax\n" //ss
      "push %%ebp\n" //sp
      "pushf\n"      //flags
      "push %%ebx\n" //cs
      "push %%ecx\n" //ip
      "iret"
      ::"a"(gdt_krn_seg_sel(2)), "b"(gdt_krn_seg_sel(1)), "c"(&userland)
   );

   debug("\nEnd executing tp3.\n");
}

// Debug mode : 
// 1) make debug 
// 2) gdb kernel.elf
// 3) target remote : 1234

// Pour tester en ring 3, on essaie d'exécuter une instruction Ring0 et voir si on a une exception


// objdump -D kernel.elf | less
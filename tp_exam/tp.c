/* GPLv2 (c) Airbus */

/*
    Authors :
    - Nicolas Barboteu <nicolas.barboteu@etu.toulouse-inp.fr>
    - Mathis Hyounet <mathis.hyounet@etu.toulouse-inp.fr>
*/

#include <debug.h>
#include <info.h>
#include <segmem.h>
#include <intr.h>
#include <segfunc.h>
#include <intfunc.h>

extern info_t *info;
extern uint32_t __kernel_start__;
extern uint32_t __kernel_end__;

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

void tp() {
	
	printf("\nShow memory mapping ~>\n");
	debug("Kernel memory : \t[%p - %p]\n", &__kernel_start__, &__kernel_end__);
	debug("MBI flags : \t\t[0x%x]\n\n", info->mbi->flags);

	multiboot_memory_map_t* entry = (multiboot_memory_map_t*)info->mbi->mmap_addr;
   	while((uint32_t)entry < (info->mbi->mmap_addr + info->mbi->mmap_length)) {
		char *mbm[] = {"MULTIBOOT_MEMORY_AVAILABLE", 
						"MULTIBOOT_MEMORY_RESERVED", 
						"MULTIBOOT_MEMORY_ACPI_RECLAIMABLE", 
						"MULTIBOOT_MEMORY_NVS"};
		debug("[0x%x - 0x%x] %s\n", (unsigned int)entry->addr, (unsigned int)(entry->addr + entry->len - 1), mbm[entry->type-1]);
		entry++;
	}

	printf("\n");

	// ~~~ Global Descriptor Table initialization ~~~

    gdt_initialization();

    gdt_reg_t gdtr_ptr;
    get_gdtr(gdtr_ptr);
	debug("GDT addr : \t[0x%x]\n", (unsigned int) gdtr_ptr.addr);
	debug("limit : \t[%d]\n\n", gdtr_ptr.limit);

	print_gdt_content(gdtr_ptr);

	printf("\n");

	// ~~~ Interrupt Descriptor Table initialization ~~~

    idt_initialization();
	
	idt_reg_t idtr;
	get_idtr(idtr);

	printf("IDT Base Address: \t[%p]\n", (void *)idtr.addr);

    // ~~~ hardware interrupt activation ~~~

    asm volatile("sti");

}

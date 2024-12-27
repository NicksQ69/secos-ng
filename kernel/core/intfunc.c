#include <intfunc.h>
#include <intr.h>

void clock_handler_c()
{
    // TODO
}

void clock_handler()
{
    asm volatile(
        "pusha\n"
		"call clock_handler_c\n"
		"popa\n"
		"leave\n"
		"iret\n"
    );
}

void idt_initialization()
{
    idt_reg_t idtr;
	get_idtr(idtr);

    int_desc_t *idt;
	idt = (int_desc_t *)idtr.addr;

    idt[32].offset_1 = (uint16_t)((uint32_t)clock_handler & 0xffff);
	idt[32].offset_2 = (uint16_t)((uint32_t)clock_handler >> 16);
}

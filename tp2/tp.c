/* GPLv2 (c) Airbus */
#include <debug.h>
#include <intr.h>

void bp_handler_c() {
	debug("\nBreakpoint Exception (#BP)\n");
	uint32_t val;
	asm volatile ("mov 4(%%ebp), %0":"=r"(val));
	debug("Valeur EBP-4: %p\n\n", (void *)val);
	/* Dernière instruction : RET
		Cette instruction permet de quitter une procédure. 
		Ainsi, elle indique au microprocesseur 
		qu'il doit désempiler la valeur du pointeur d'instructions 
		contenu dans la pile et la copier dans les registres CS:IP.
		Ensuite, l'exécution du code se poursuit 
		à l'instruction suivant de l'instruction «CALL».
    */
}

void bp_handler() {
	asm volatile(
		"pusha\n"				// Sauvegarde tous les registres généraux
		"call bp_handler_c\n"	// Appeler la fonction de gestion d'interruption
		"popa\n"				// Restaurer tous les registres généraux
		"leave\n"				// Restaure le pointeur de pile (ESP) et le pointeur de base (EBP) à leurs valeurs d'avant l'appel de la fonction.
		"iret\n"				// Retourner de l'interruption
	);
}


void bp_trigger() {
	asm volatile("int3");
	debug("finished #BP handler processing\n");
}

void tp() {
	idt_reg_t idtr;
	get_idtr(idtr);

	printf("\nIDT Base Address: %p\n", (void *)idtr.addr);

	int_desc_t *idt;
	idt = (int_desc_t *)idtr.addr;

	build_int_desc(&idt[3], gdt_krn_seg_sel(1), (offset_t)bp_handler);

	bp_trigger();

	/* Q11 : Le développement en C sur la gestion d'interruption est pratique 
	pour personnaliser un handler adapté selon une interruption spécifique à notre programme. 
	Toutefois, il est très utile d'utiliser l'assembleur pour réceptionner les interruptions 
	processeurs et ainsi directement controler la pile pour ensuite exécuter le handler associé. */

}

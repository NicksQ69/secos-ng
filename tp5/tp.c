/* GPLv2 (c) Airbus */
#include <debug.h>
#include <intr.h>

void syscall_isr() {
   asm volatile (
      "leave ; pusha        \n"
      "mov %esp, %eax      \n"
      "call syscall_handler \n"
      "popa ; iret"
      );
}

void __regparm__(1) syscall_handler(int_ctx_t *ctx) {
   debug("SYSCALL eax = %p\n", (void *) ctx->gpr.eax.raw);
}

void userland() {
    // TODO à compléter
   while(1);
}

void tp() {
    // TODO
}

// tp0 --> seg --> int --> paging --> Ring3 -->
//          On lance une int 0x80 dans l'idt qui va pointer à l'@virt associé puis exécuter le handler
//                   Exécution en Ring0
//                      On cherche en tant que programme en Ring3 d'exécuter une interruption en Ring0

// Dans l'idt, on a une entrée avec un privilège Ring3 qui pointe vers un handler qui exécute un SYSCALL (Ring0 uniquement)
// ça va fonctionner car l'entrée idt valide qu'un programme puisse utiliser l'interruption et donc exécuter du SYSCALL en tant que Ring0
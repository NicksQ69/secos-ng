#include <pagfunc.h>
#include <pagemem.h>
#include <cr.h>

#define SHARED_MEMORY 0x3000000

void kernel_paging_initialization()
{
    pde32_t *pgd = (pde32_t*)0x500000;
    pte32_t *ptb0 = (pte32_t*)0x501000;
    pte32_t *ptb1 = (pte32_t*)0x502000;
    pte32_t *ptb2 = (pte32_t*)0x503000;
    memset((void*)pgd, 0, PAGE_SIZE);
    set_cr3((uint32_t)pgd);

    for(int i=0;i<1024;i++) {
	 	pg_set_entry(&ptb0[i], PG_KRN|PG_RW, i);
	}
	pg_set_entry(&pgd[0], PG_KRN|PG_RW, page_get_nr(ptb0));

    for(int i=0;i<1024;i++) {
	 	pg_set_entry(&ptb1[i], PG_KRN|PG_RW, i);
	}
	pg_set_entry(&pgd[1], PG_KRN|PG_RW, page_get_nr(ptb1));

    for(int i=0;i<1024;i++) {
	 	pg_set_entry(&ptb2[i], PG_KRN|PG_RW, i);
	}
	pg_set_entry(&pgd[2], PG_KRN|PG_RW, page_get_nr(ptb2));
}

void user1_paging_initialization()
{
    // User1 virtual addresses
    pde32_t *pgd = (pde32_t *)0x1100000;
    pte32_t *ptb0 = (pte32_t *)0x1101000; 
    pte32_t *ptb1 = (pte32_t *)0x1102000;
    pte32_t *ptb2 = (pte32_t *)0x1103000;
    memset((void *)pgd, 0, PAGE_SIZE);

    for(int i=0;i<1024;i++) {
	 	pg_set_entry(&ptb0[i], PG_KRN|PG_RW, i);
        pg_set_entry(&ptb1[i], PG_USR | PG_RW, 1024 + i);
	}
    pg_set_entry(&ptb2[0], PG_USR | PG_RW, SHARED_MEMORY >> 12);

	pg_set_entry(&pgd[0], PG_KRN | PG_RW, page_get_nr(ptb0));
    pg_set_entry(&pgd[1], PG_USR | PG_RW, page_get_nr(ptb1));
    pg_set_entry(&pgd[2], PG_USR | PG_RW, page_get_nr(ptb2));
}

void user2_paging_initialization()
{
    // User2 virtual addresses
    pde32_t *pgd = (pde32_t *)0x2100000;
    pte32_t *ptb0 = (pte32_t *)0x2101000;
    pte32_t *ptb1 = (pte32_t *)0x2102000;
    pte32_t *ptb2 = (pte32_t *)0x2103000;
    memset((void *)pgd, 0, PAGE_SIZE);

    for(int i=0;i<1024;i++) {
	 	pg_set_entry(&ptb0[i], PG_KRN | PG_RW, i);
        pg_set_entry(&ptb2[i], PG_USR | PG_RW, 2 * 1024 + i);
	}
    pg_set_entry(&ptb1[0], PG_USR | PG_RW, SHARED_MEMORY >> 12);

    pg_set_entry(&pgd[0], PG_KRN | PG_RW, page_get_nr(ptb0));
    pg_set_entry(&pgd[1], PG_USR | PG_RW, page_get_nr(ptb1));
    pg_set_entry(&pgd[2], PG_USR | PG_RW, page_get_nr(ptb2));    
}

void enable_paging()
{
    uint32_t cr0 = get_cr0();
    set_cr0(cr0|CR0_PG);
}

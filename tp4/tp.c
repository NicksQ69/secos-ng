/* GPLv2 (c) Airbus */
#include <debug.h>

void tp() {
	// TODO
}

//CR3 : contient l'adresse de la Page Directory (PDG)
//CR0 : Sert à activer ou non la pagination (bit 31, le dernier bit)
//Traduire les donnés déjà stocké de adresse direct (secos) en pagination (correspondance @virtuel = @physique)
// 		On remplit chaque entrée i de PGD, remplir des PTB (Page Table) de sorte que ptb[t].addr = ((d<<10)|t) << 12
// 		Active la pagination

//		Différent paramètre dans une PTB : P (Présence de donnée), U/S (bit de privilège, accessible en ring 0 quand U/S = 0, ou ring 3 quand U/S = 1)

// Calcul d'identity mapping :
// @virt = d(10 bit) | t(10 bit) | p(12 bit) = @phy
// On veut la valeur de d, t et @PTB[t]
// ex : 0xC02000
// @phy=0000 0000 11|00 0000 0010 | 0000 0000 0000
// 			d = 3		t=2
// On inscrit dans la PGD à l'index d = 3 l'@ de PTB[t] associé
//		Puis dans la PTB à l'index t = 2, on donne l'@phy 0xC02000

// D'après le sujet d'exemple, l'@virt ci-dessus correspond à la dernière entrée PGD qu'on souhaite faire du identity mapping
// On doit itéré de l'index 0 jusqu'à d = 3 du PGD en créant à chaque fois une PTB associé en remplissant les informations pour
// faire du identity mapping avec les données précédemments inscrits.

//Si on efface la première entrée de la PGD, le CPU va consulter son cache pour retrouver l'@virt à l'@phy associé
//		Mapping dans le cache de l'@virt à l'@phy + bit U/S + bit Read/Write (Active/désactive le write)

// Si bit Read/Write à 1, on peut lire et écrire (page de donnée), si bit R/W à 0, on peut uniquement lire (page de code)


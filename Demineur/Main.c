#include <stdio.h>
#include <assert.h>
enum {DEFAULT_SIZE = 11};
enum {VIDE,MINE,DEMINE};


void initialisation(int tab[][DEFAULT_SIZE]) { // remplacer plus tard avec malloc (enregistre la taille max du tab puis on envoie avec un pointeur et on reutilise la taille n)
	for (unsigned int i = 0; i < DEFAULT_SIZE; i++) {
		for (unsigned int j = 0; j < DEFAULT_SIZE; j++) {
			tab[i][j] = VIDE;
		}
	}
}

void affichePartie(unsigned int tab[DEFAULT_SIZE][DEFAULT_SIZE]) {
	printf("  ");
	for (unsigned int i = 0; i < DEFAULT_SIZE; i++) {
		printf(" %u", i);
	}
	printf("%c", '\n');
	for (unsigned int i = 0; i < DEFAULT_SIZE; i++) {
		if (i < 10 && DEFAULT_SIZE >= 10) // Condition pour aligner avec les chiffres des dizaines
			printf(" ");
		printf("%u ", i);
		for (unsigned int j = 0; j < DEFAULT_SIZE; j++) {
			// printf("%u ", tab[i][j]); // affichage contenu cellules
			printf(". ");
		}
		printf("%c", '\n');
	}
}

int main(void) {
	unsigned int tab[DEFAULT_SIZE][DEFAULT_SIZE];
	initialisation(tab);
	affichePartie(tab);
}
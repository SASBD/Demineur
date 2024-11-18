#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
enum { DEFAULT_SIZE = 11 };
typedef enum { VIDE, MINE, DEMINE } Etat;


void initialisation(Etat tab[][DEFAULT_SIZE]) { // remplacer plus tard avec malloc (enregistre la taille max du tab puis on envoie avec un pointeur et on reutilise la taille n)
	for (unsigned int i = 0; i < DEFAULT_SIZE; i++) {
		for (unsigned int j = 0; j < DEFAULT_SIZE; j++) {
			tab[i][j] = VIDE;
		}
	}
}

void affichePartie(Etat tab[DEFAULT_SIZE][DEFAULT_SIZE]) {
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
/*
unsigned int s = (unsigned int) time (NULL);
printf("%u\n, s);
srand(s);
*/
void placerBombes(unsigned int m) {
	unsigned int j = 0;
	for (int i = 0; m > 0, i++) // je remplis par ligne pas par colonne
	{
		tab[i][j] == MINE;
		if (i == DEFAULT_SIZE - 1) {
			j++;
			i = 0;
		}
		m--;
	}
	if (m != DEFAULT_SIZE * DEFAULT_SIZE) {
		for (int i = DEFAULT_SIZE * DEFAULT_SIZE - 1; i > 0; i--)
		{
			unsigned int j = rand() % (i + 1);
			Etat temp = tab[i % DEFAULT_SIZE][i / DEFAULT_SIZE];
			tab[i % DEFAULT_SIZE][i / DEFAULT_SIZE] = tab[j % DEFAULT_SIZE][j / DEFAULT_SIZE];
			tab[j % DEFAULT_SIZE][j / DEFAULT_SIZE] = temps;
		}
	}
}

void statutPartie() {

}

int main(void) {
	unsigned int tab[DEFAULT_SIZE][DEFAULT_SIZE];
	initialisation(tab);
	affichePartie(tab);
}
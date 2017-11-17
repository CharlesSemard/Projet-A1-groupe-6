#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MAX_STRING 15

#define TAILLE_TAB 100


struct stockerInformation{
    int pouls;
    int temps;
};

struct stockerInformation *tab;

int lireFichier(struct stockerInformation *donnees);

void initialisationStructures(struct stockerInformation *tab, int tailleTab);


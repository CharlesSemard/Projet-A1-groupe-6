#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "menu.h"



int main()
{
    struct stockerInformation tab[TAILLE_TAB];
    initialisationStructures(tab , TAILLE_TAB);
    int nbrDeDonnees = 0;

    nbrDeDonnees = lireFichier(tab); //on lit le fichier .csv

    menu(tab, nbrDeDonnees); // on affiche le menu afin de choisir l'action
    return 0;
}

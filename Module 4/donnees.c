#include "donnees.h"



int lireFichier(struct stockerInformation *tab){
FILE *f = NULL;
char buffer[TAILLE_MAX_STRING]; //initialisation du buffer
int i=0;
int pls = 1; // variable concernant le pouls
int tmps = 2; // variable concernant le temps

f = fopen("./Randgen.csv", "r"); //on ouvre le fichier

if (f == NULL){
    printf("Le fichier n'a pas pu etre ouvert.");
    exit(1); //on ferme le programme si on ne peut pas ouvrir le fichier
}
else {
    printf("Le fichier est ouvert.\n\n");
}

while (fgets(buffer, TAILLE_MAX_STRING, f) != NULL){
    sscanf(buffer, "%d;%d", &pls, &tmps);
    tab[i].pouls = pls; // on stock la valeur pls dans le tableau
    tab[i].temps = tmps; // on stock la valeur tmps dans le tableau
    i++;

}
fclose(f);
//on ferme le fichier et on retourne le compteur i
return (i);
}



void initialisationStructures(struct stockerInformation *tab, int tailleTab){
    int i;
    for (i = 0; i <= tailleTab; i++){
        tab[i].pouls = 0;
        tab[i].temps = 0;
    }
}









































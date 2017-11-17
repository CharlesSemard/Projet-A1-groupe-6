#include "actions.h"


//Afficher les données dans l’ordre du fichier .csv

void afficherDonnees(struct stockerInformation *tab, int tailleTab){
    int i=0;
    while (i < tailleTab){
        printf("Pouls = %d.\nTemps = %d ms.\n\n", tab[i].pouls, tab[i].temps);
        i++;
    }
}


//Afficher les données en ordre croissant/décroissant (selon le temps, selon le pouls)

void triCroissantPouls(struct stockerInformation *tab, int tailleTab){
    int i, j, memory, memory2 = 0; // i et j seront les cases du tableau
    for (i = 0; i<tailleTab; i++){ //on parcourt toutes les cases du tableau
        for (j = i; j<tailleTab; j++){ //données croissantes
            if (tab[j].pouls < tab[i].pouls){
                memory = tab[i].pouls; //on met les données en mémoire
                tab[i].pouls = tab[j].pouls;
                tab[j].pouls = memory;
                memory2 = tab[i].temps;//on met les données en mémoire
                tab[i].temps = tab[j].temps;
                tab[j].temps = memory2;
            }
        }
    }
    afficherDonnees(tab, tailleTab);
}

void triCroissantTemps(struct stockerInformation *tab, int tailleTab){
        int i, j, memory, memory2 = 0;
    for (i = 0; i<tailleTab; i++){
        for (j = i; j<tailleTab; j++){
            if (tab[j].temps < tab[i].temps){
                memory = tab[i].pouls;
                tab[i].pouls = tab[j].pouls;
                tab[j].pouls = memory;
                memory2 = tab[i].temps;
                tab[i].temps = tab[j].temps;
                tab[j].temps = memory2;
            }
        }
    }
    afficherDonnees(tab, tailleTab);
}

void triDecroissantPouls(struct stockerInformation *tab, int tailleTab){
       int i, j, memory, memory2 = 0;
    for (i = 0; i<tailleTab; i++){
        for (j = i; j<tailleTab; j++){
            if (tab[j].pouls > tab[i].pouls){
                memory = tab[i].pouls;
                tab[i].pouls = tab[j].pouls;
                tab[j].pouls = memory;
                memory2 = tab[i].temps;
                tab[i].temps = tab[j].temps;
                tab[j].temps = memory2;
            }
        }
    }
    afficherDonnees(tab, tailleTab);
}

void triDecroissantTemps(struct stockerInformation *tab, int tailleTab){
       int i, j, memory, memory2 = 0;
    for (i = 0; i<tailleTab; i++){
        for (j = i; j<tailleTab; j++){
            if (tab[j].temps > tab[i].temps){
                memory = tab[i].pouls;
                tab[i].pouls = tab[j].pouls;
                tab[j].pouls = memory;
                memory2 = tab[i].temps;
                tab[i].temps = tab[j].temps;
                tab[j].temps = memory2;
            }
        }
    }
    afficherDonnees(tab, tailleTab);
}





//Rechercher et afficher les données pour un temps particulier

void rechercheDonnees(struct stockerInformation *tab, int tailleTab){
    int plageDeTemps,i=0; //on initialise le temps souhaité
    printf("Donnez une plage de temps en milliseconde.\n\n");
    scanf("%d", &plageDeTemps); // on récupère la plage de temps
    while (tab[i].temps < plageDeTemps){
        printf("Pouls = %d.\nTemps = %d ms.\n\n", tab[i].pouls, tab[i].temps);
        i++;
    }
}





//Afficher la moyenne de pouls dans une plage de temps donnée


void moyenneDePouls(struct stockerInformation *tab, int tailleTab){

    float sommePouls = 0.0, moyenne = 0.0;
    int plageDeTemps, i =0;


    printf("Donnez une plage de temps en ms :\n");
    scanf("%d", &plageDeTemps);

    while (tab[i].temps <= plageDeTemps){
        sommePouls += tab[i].pouls;
        i++;
    }

    moyenne = sommePouls/i;
    printf("\nVotre moyenne de pouls est de : %f \n", moyenne);
}




//Afficher le nombre de lignes de données actuellement en mémoire

void afficherMemoire(struct stockerInformation *tab, int tailleTab){
    printf("\nIl y a actuellement %d lignes de donnees en memoire.\n", tailleTab);
}


//Rechercher et afficher les max/min de pouls (avec le temps associé)
void afficherPoulsMinMax(struct stockerInformation *tab, int tailleTab){
    int min, max, i = 0;
    min = tab[i].pouls;
    max = tab[i].pouls;

    for (i=1; i < tailleTab; i++){

        if (min > tab[i].pouls){
            min = tab[i].pouls;
        }

        if (max < tab[i].pouls){
            max = tab[i].pouls;
        }
    }
    printf("Le pouls minimum est : %d\nLe pouls maximum est : %d\n\n", min, max);
}


//Quitter l’application
int quitterApplication(){
    exit(1);
}

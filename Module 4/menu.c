#include "menu.h"

void menu(struct stockerInformation *tab, int tailleTab){

    int choixMenu;
    printf("-=-= MENU =-=-\n\n");
    printf("1. Afficher les donnees dans l ordre du fichier .csv\n");
    printf("2. Afficher les donnees en ordre croissant selon le pouls\n");
    printf("3. Afficher les donnees en ordre croissant selon le temps\n");
    printf("4. Afficher les donnees en ordre decroissant selon le temps\n");
    printf("5. Afficher les donnees en ordre decroissant selon le pouls\n");
    printf("6. Rechercher et afficher les donnees pour un temps particulier\n");
    printf("7. Afficher la moyenne de pouls dans une plage de temps donnee\n");
    printf("8. Afficher le nombre de lignes de donnees actuellement en memoire\n");
    printf("9. Rechercher et afficher les max/min de pouls (avec le temps associe)\n");
    printf("10. Quitter l application\n");

scanf("%d", &choixMenu); //on récupère le choix de l'utilisateur


switch (choixMenu){ // chaque choix appel une fonction

case 1: //si l'utilisateur tape 1
    afficherDonnees(tab, tailleTab);
    break;

case 2: //si l'utilisateur tape 2
    triCroissantPouls(tab, tailleTab);
    break;

case 3: //si l'utilisateur tape 3
    triCroissantTemps(tab, tailleTab);
    break;

case 4: //si l'utilisateur tape 4
    triDecroissantTemps(tab, tailleTab);
    break;

case 5: //si l'utilisateur tape 5
    triDecroissantPouls(tab, tailleTab);
    break;

case 6: //si l'utilisateur tape 6
    rechercheDonnees(tab, tailleTab);
    break;

case 7: //si l'utilisateur tape 7
    moyenneDePouls(tab, tailleTab);
    break;

case 8: //si l'utilisateur tape 8
    afficherMemoire(tab, tailleTab);
    break;

case 9: //si l'utilisateur tape 9
    afficherPoulsMinMax(tab, tailleTab);
    break;


default : //sinon
    quitterApplication();
    break;



}
}
//}

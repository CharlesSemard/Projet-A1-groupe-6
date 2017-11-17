#include "menu.h"

void menu()
{
    int Aff;

    printf("         ============MENU============         \n\n");
    printf("Quel mode d'affichage voulez vous utiliser ?\n\n");
    printf("    1 - Toutes les LEDs\n");
    printf("    2 - Une LED sur Deux\n");
    printf("    3 - Une LED sur trois\n");
    printf("    4 - La chenille\n");
    printf("    5 - Allumage random\n");
    printf("    6 - Allumage d'une LED au choix\n");
    printf("    0 - Quitter\n\n");
    printf("Choix : ");
    scanf("%d", &Aff);

    switch (Aff)
    {
    case 0:
        printf("Le programme est ferme\n");
        break;

    case 1:
        Complet();
        system("start C:\\Users\\coren\\Documents\\CESI\\Fondamentauscientifique\\Projet\\coeur\\coeur.ino");
        break;

    case 2:
        UnDeux();
        system("start C:\\Users\\coren\\Documents\\CESI\\Fondamentauscientifique\\Projet\\coeur\\coeur.ino");
        break;

    case 3:
        UnTrois();
        system("start C:\\Users\\coren\\Documents\\CESI\\Fondamentauscientifique\\Projet\\coeur\\coeur.ino");
        break;

    case 4:
        chenille();
        system("start C:\\Users\\coren\\Documents\\CESI\\Fondamentauscientifique\\Projet\\coeur\\coeur.ino");
        break;
    case 5:
        Random();
        system("start C:\\Users\\coren\\Documents\\CESI\\Fondamentauscientifique\\Projet\\coeur\\coeur.ino");
        break;
    case 6:
        Choix();
        system("start C:\\Users\\coren\\Documents\\CESI\\Fondamentauscientifique\\Projet\\coeur\\coeur.ino");
        break;
    default:
        printf("Ce n'est pas un choix valable");
        break;
    }
}

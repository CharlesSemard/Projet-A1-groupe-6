#include "generationCode.h"

void Complet()
{
    FILE*f = NULL;

    f = fopen("C:\\Users\\coren\\Documents\\CESI\\Fondamentauscientifique\\Projet\\coeur\\param.h","w");

    fprintf(f,"void Complet()                                              //Fonction d'affichage avec toutes les LEDs allumé\n{\n");
    fprintf(f,"     int  pinLed[10] = {9, 10, 6, 4, 3, 2, 5, 7, 8, 11};    //Initialisation des LEDs en fonction des ports digitals\n\n");
    fprintf(f,"        digitalWrite(pinLed[1], HIGH);                      //Allumage de toutes les LEDS\n        digitalWrite(pinLed[2], HIGH);\n");
    fprintf(f,"        digitalWrite(pinLed[3], HIGH);\n        digitalWrite(pinLed[4], HIGH);\n        digitalWrite(pinLed[5], HIGH);\n        digitalWrite(pinLed[6], HIGH);\n");
    fprintf(f,"        digitalWrite(pinLed[7], HIGH);\n        digitalWrite(pinLed[8], HIGH);\n        digitalWrite(pinLed[9], HIGH);\n        digitalWrite(pinLed[0], HIGH);\n");
    fprintf(f,"        delay(100);                                         //Au bout de 100 ms,\n        digitalWrite(pinLed[1], LOW);                       //Eteindre toutes les LEDs\n");
    fprintf(f,"        digitalWrite(pinLed[2], LOW);\n        digitalWrite(pinLed[3], LOW);\n        digitalWrite(pinLed[4], LOW);\n");
    fprintf(f,"        digitalWrite(pinLed[5], LOW);\n        digitalWrite(pinLed[6], LOW);\n        digitalWrite(pinLed[7], LOW);\n        digitalWrite(pinLed[8], LOW);\n");
    fprintf(f,"        digitalWrite(pinLed[9], LOW);\n        digitalWrite(pinLed[0], LOW);\n        delay(100);\n}\nvoid chenille(){}\nvoid UnDeux(){}\nvoid UnTrois(){}\nvoid Random(){}\nvoid Choix(){}");
    fclose(f);
}

void chenille()
{
    FILE*f = NULL;

    f = fopen("C:\\Users\\coren\\Documents\\CESI\\Fondamentauscientifique\\Projet\\coeur\\param.h","w");

    fprintf(f,"void chenille()                                           //Fonction chenille qui permet\n                                                          //les LEDs en forme de chenille");
    fprintf(f,"{\n    int i = 0;                                            //On initialise une variable pour la boucle for\n");
    fprintf(f,"    int  pinLed[10] = {9, 10, 6, 4, 3, 2, 5, 7, 8, 11};   //Initialisation des LEDs en fonction des ports digitals\n\n");
    fprintf(f,"     for (int i = 1; i < 10; i++)                         //Boucle allant de 1 à 10\n        {\n            digitalWrite(pinLed[i-1], HIGH);              //Allumage de la LED -1\n");
    fprintf(f,"            delay(20);                                    //Au bout de 20 ms\n            digitalWrite(pinLed[i], HIGH);                //Allumage de la LED 1\n");
    fprintf(f,"            delay(20);                                    //Au bout de 20 ms\n");
    fprintf(f,"            digitalWrite(pinLed[i-1], LOW);                 //On eteint la LED -1\n         }\n           digitalWrite(pinLed[9], LOW);                //On eteint la derniere LED pas eteinte\n}");
    fprintf(f,"\nvoid Complet(){}\nvoid UnDeux(){}\nvoid UnTrois(){}\nvoid Random(){}\nvoid Choix(){}");
    fclose(f);
}

void UnDeux()
{
    FILE*f = NULL;

    f = fopen("C:\\Users\\coren\\Documents\\CESI\\Fondamentauscientifique\\Projet\\coeur\\param.h","w");

    fprintf(f,"void UnDeux()                                               //Fonction UnDeux, affiche une LED sur deux\n{\n     int  pinLed[10] = {9, 10, 6, 4, 3, 2, 5, 7, 8, 11};");
    fprintf(f,"    //Initialisation des LEDs en fonction des ports digitals\n");
    fprintf(f,"        for (int i = 0; i < 10; i=i+2)                      //Boucal allant de 1 a 10 mais allant de 2 en 2\n        {\n            digitalWrite(pinLed[i], HIGH);");
    fprintf(f,"                  //On allume la LED pointé par i\n");
    fprintf(f,"            delay(50);                                      //Au bout de 50ms\n");
    fprintf(f,"            digitalWrite(pinLed[i], LOW);                   //On eteint la LED\n        }\n}\nvoid chenille(){}\nvoid Complet(){}\nvoid UnTrois(){}\nvoid Random(){}\nvoid Choix(){}");
    fclose(f);
}

void UnTrois()
{
    FILE*f = NULL;

    f = fopen("C:\\Users\\coren\\Documents\\CESI\\Fondamentauscientifique\\Projet\\coeur\\param.h","w");

    fprintf(f,"void UnTrois()                                               //Fonction UnDeux, affiche une LED sur deux\n{\n     int  pinLed[10] = {9, 10, 6, 4, 3, 2, 5, 7, 8, 11};");
    fprintf(f,"    //Initialisation des LEDs en fonction des ports digitals\n");
    fprintf(f,"        for (int i = 0; i < 10; i=i+3)                      //Boucal allant de 1 a 10 mais allant de 2 en 2\n        {\n            digitalWrite(pinLed[i], HIGH);");
    fprintf(f,"                  //On allume la LED pointé par i\n");
    fprintf(f,"            delay(50);                                      //Au bout de 50ms\n");
    fprintf(f,"            digitalWrite(pinLed[i], LOW);                   //On eteint la LED\n        }\n}\nvoid chenille(){}\nvoid Complet(){}\nvoid UnTrois(){}\nvoid Random(){}\nvoid Choix(){}");
    fclose(f);

}

void Random()
{
    FILE*f = NULL;

    f = fopen("C:\\Users\\coren\\Documents\\CESI\\Fondamentauscientifique\\Projet\\coeur\\param.h","w");

    fprintf(f,"void Random()                                              //Fonction qui affiche une seul LED de facon aléatoire\n{\n");
    fprintf(f,"    int  pinLed[10] = {9, 10, 6, 4, 3, 2, 5, 7, 8, 11};    //Initialisation des LEDs en fonction des ports digitals\n");
    fprintf(f,"    int i = random(11);                                    //Initialisation de la LED aléatoire qui va etre allumé\n");
    fprintf(f,"    digitalWrite(pinLed[i], HIGH);                         //On allume la LED en question\n");
    fprintf(f,"    delay(100);                                            //Au bout de 100 ms\n");
    fprintf(f,"    digitalWrite(pinLed[i], LOW);                          //On eteint la LED\n}\n");
    fprintf(f,"void chenille(){}\nvoid Complet(){}\nvoid UnTrois(){}\nvoid UnDeux(){}\nvoid Choix(){}");
    fclose(f);
}

void Choix()
{
    int choix;
    FILE*f = NULL;
    f = fopen("C:\\Users\\coren\\Documents\\CESI\\Fondamentauscientifique\\Projet\\coeur\\param.h","w");
    fprintf(f,"void Choix()                                              //Fonction qui affiche une seul LED choisie\n{\n");
    fprintf(f,"    int  pinLed[10] = {9, 10, 6, 4, 3, 2, 5, 7, 8, 11};    //Initialisation des LEDs en fonction des ports digitals\n");
    printf("\n\nQuelle LED voulez vous allumer\n\n");
    printf("    9   1     \n");
    printf("  8   0   2      Hexart\n");
    printf("   7     3         Care\n");
    printf("    6   4     \n");
    printf("      5       \n\n");
    printf("Choix : ");
    scanf("%d", &choix);
    switch (choix)
    {
        case 0:
            fprintf(f,"    int choix = 0;                                         //Initialisation de la LED qui va etre allumé\n");
            break;
        case 1:
            fprintf(f,"    int choix = 1;                                         //Initialisation de la LED qui va etre allumé\n");
            break;
        case 2:
            fprintf(f,"    int choix = 2;                                         //Initialisation de la LED qui va etre allumé\n");
            break;
        case 3:
            fprintf(f,"    int choix = 3;                                         //Initialisation de la LED qui va etre allumé\n");
            break;
        case 4:
            fprintf(f,"    int choix = 4;                                         //Initialisation de la LED qui va etre allumé\n");
            break;
        case 5:
            fprintf(f,"    int choix = 5;                                         //Initialisation de la LED qui va etre allumé\n");
            break;
        case 6:
            fprintf(f,"    int choix = 6;                                         //Initialisation de la LED qui va etre allumé\n");
            break;
        case 7:
            fprintf(f,"    int choix = 7;                                         //Initialisation de la LED qui va etre allumé\n");
            break;
        case 8:
            fprintf(f,"    int choix = 8;                                         //Initialisation de la LED qui va etre allumé\n");
            break;
        case 9:
            fprintf(f,"    int choix = 9;                                         //Initialisation de la LED qui va etre allumé\n");
            break;
    }
    fprintf(f,"    digitalWrite(pinLed[choix], HIGH);                     //On allume la LED en question\n");
    fprintf(f,"    delay(100);                                            //Au bout de 100 ms\n");
    fprintf(f,"    digitalWrite(pinLed[choix], LOW);                      //On eteint la LED\n}\n");
    fprintf(f,"void chenille(){}\nvoid Complet(){}\nvoid UnTrois(){}\nvoid UnDeux(){}\nvoid Random(){}");
    fclose(f);
}

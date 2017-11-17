#include "param.h"
#include "coeur.h"
#include "cardio.h"

int tpsDer;                               //On inclut une variable globale prennant le dernier temps calculé du pouls

void setup()
{
  tpsDer = millis();                      //On donne le temps depuis lequelle a démaré l'arduino à la variable globale
  
 
  for (int i = 0; i < 10; i++)            //Boucle allant de 0 à 9
  {                                       //Cette boucle permet d'initialiser
    pinMode(pinLed[i], OUTPUT);           //Les sorties digital en sortie
    digitalWrite(pinLed[i], LOW);         //Et ne pas mettre de courant dans ses sorties
  }
  
  Serial.begin(9600);                     //On initialise le port série à 9600 baud (bit/s)
}

void loop()
{
  while (millis() < 100000)               //Boucle qui permet de de donner un temps de 100s au programme
  {                                       //Pour calculé le pouls
    if (analogRead(A0) > 640)             //Si la sortie A0 est supérieur a 640 la boucle peut être effectué
    { 
      Complet();                          //Ses quatres fonctions sont initialisé ici car grâce au fichier param.h
      chenille();                         //Il permet de gerer l'affichage des LEDs
      UnDeux();                           //Il y a seulement une seul de ses fonctions qui pourra être définis
      UnTrois();                          //Donc on met dans cette boucle les quatres fonctions
      Random();
      Choix();
      
                                          //Pour afficher le résultat dans le fichier .csv
                                          //On utilise processing qui récupère les informations au port série
                                          //Pour être sure que processing prenne toutes les valeurs, on lui donne
                                          //Une lettre pour le début et une lettre pour la fin
      Serial.print("D");                  //On affiche la lettre du début
      Serial.print(temps());              //On affiche la fonction temps situé dans le fichier cardio.ino
      Serial.print(";");                  //On affiche le point virgule pour le fichier csv
                                          //Qui sépare les valeurs dans 2 colones différentes
      Serial.print(pouls(tpsDer));        //On affiche la fonction pouls situé dans le fichier cardio.ino
      Serial.println("F");                //On affiche la lttre de la fin
      
      tpsDer = millis();                  //On donne la valeur le nombre de millisecondes depuis le démarrage du programme
                                          //pour le dernier temps du pouls calculé
    }
  }
}



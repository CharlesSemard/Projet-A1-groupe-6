#include "cardio.h"

int temps()               //Fonction temps qui permet de calculer
                          //le nombre de millisecondes depuis le démarrage du programme
{
  int tps = millis();     //On initialise une variable tps(temps) et on lui donne comme valeur 
                          //le nombre de millisecondes depuis le démarrage du programme
  return tps;             //Ensuite on return à la fonction temps la valeur de tps c'est à dire
                          //le nombre de millisecondes depuis le démarrage du programme
}


int pouls(int tpsDer)                               //Fonction pouls qui permet de calculer le pouls (btm/m) elle a comme parametre le dernier temps calculé
{
  int pls;                                          //On initialise une variavle pls
  pls = ( (1000.0 * 60.0) / (millis() - tpsDer));   //Dans cette variable, on lui donne la valeur du pouls calculé
  if (pls > 50 && pls < 120)                        //Boucle permettant de mettre le pouls entre 50 et 120
  {
  return pls;                                       //Dans cette boucle on return le pouls si il est compris entre 50 et 120 (sinon ce n'est pas un véritable pouls)
                                                    //Sinon il return rien
  }
}

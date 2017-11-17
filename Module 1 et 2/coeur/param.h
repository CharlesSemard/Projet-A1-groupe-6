void Choix()                                              //Fonction qui affiche une seul LED choisie
{
    int  pinLed[10] = {9, 10, 6, 4, 3, 2, 5, 7, 8, 11};    //Initialisation des LEDs en fonction des ports digitals
    int choix = 0;                                          //Initialisation de la LED qui va etre allum�
    digitalWrite(pinLed[choix], HIGH);                     //On allume la LED en question
    delay(100);                                            //Au bout de 100 ms
    digitalWrite(pinLed[choix], LOW);                      //On eteint la LED
}
void chenille(){}
void Complet(){}
void UnTrois(){}
void UnDeux(){}
void Random(){}

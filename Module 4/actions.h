#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"


void afficherDonnees(struct stockerInformation *tab, int tailleTab);

void triABulle(struct stockerInformation *tab);

void triCroissantPouls(struct stockerInformation *tab, int tailleTab);

void triCroissantTemps(struct stockerInformation *tab, int tailleTab);

void triDecroissantPouls(struct stockerInformation *tab, int tailleTab);

void triDecroissantTemps(struct stockerInformation *tab, int tailleTab);

void rechercheDonnees(struct stockerInformation *tab, int tailleTab);

void moyenneDePouls(struct stockerInformation *tab, int tailleTab);

void afficherMemoire(struct stockerInformation *tab, int tailleTab);

void afficherPoulsMinMax(struct stockerInformation *tab, int tailleTab);

int quitterApplication();

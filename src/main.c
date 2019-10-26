#include <stdio.h>
#include<stdlib.h>
#include "appli.h"
#include "etud.h"

/*
 * Variable globale qui contient la liste chainée etudi
 */

Etud* pEtud;

/*
 * Fichier de sauvegarde des etudiants
 */
FILE* file = NULL;

/*
 * Lancement de l'application avec le chargement de la liste des etudiant
 * l'option choisi dans le menu 
 *Sauvegarde des modification apporteés.
 */
int main (int argc, char* argv[]){
    num_etud = 0;
    pEtud = malloc(sizeof(*pEtud));
    char* file_name = "sauvergarde.txt";

    chargement(file_name); 
    application();
    sauvegarde(file_name);
    
    return 0; 
}

#include "appli.h"
#include "etud.h"
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/** 

 * Affichage du menu principale de l'application

 */
void print_menu(){
  printf(" \n 1) Afficher la liste      \n");
  printf(" 2) Ajouter un etudiant    \n");
  printf(" 3) Supprimer un etusiant  \n");
  printf(" 4) Afficher la moyenne    \n");
  printf(" 5) Modifier une note \n");
  printf("\n Saisir un choix :       \n");
}


/** 

 * l'utilisateur choisi une option dans le menu

 */
void application(){
	int choix;
	char nom[50];
    char prenom[50];
    float note;
    int num_delete;
    int num_modifier;
    int continuer;

	printf("\033[H\033[2J");
	printf("==== Bienvenu dans l'application de gestion des étudiants  ===== \n");
	while(1){
		print_menu();
		scanf("%d", &choix);
		switch (choix){
			case 1 : 
				printf("\033[H\033[2J");
				print_list();
				break;

			case 2 :
				printf("\033[H\033[2J");
				printf("==========  AJOUT D'UN ETUDIANT ============\n");
				printf("veuillez saisir le nom de l'étudiant :  ");
				scanf("%s", nom);
  				printf("veuillez saisir le prénom de l'étudiant  :  ");
  				scanf("%s", prenom);
				printf("veuillez saisir la note de l'étudiant :  ");
  				scanf("%f", &note);	
  				add_etud(nom, prenom, note);
    			printf("\n============= Etudiant ajouté ===============  \n");
  				break;

  			case 3 : 
  				printf("veuillez saisir le numéro de l'étudiant a Supprimer :  ");
  				scanf("%d", &num_delete);
  				delete_etud(num_delete);
  				break;

  			case 4 :
  				printf("La moyenne de la classe est : %f \n", moyenne_classe());
  				break;

  			case 5 : 
  				printf("Entrez le numéro de l'etudiant :   ");
  				scanf("%d", &num_modifier);
  				printf("Entrez la nouvelle note :  ");
  				scanf("%f", &note);
  				edit_etud(num_modifier,note);

  			default : 	
  				printf("Erreur !!! reessayez \n");
				printf("\033[H\033[2J");


		}

		want_continue :
		printf("\n =========== voulez vous continuer ==========\n");
		printf(" 1) OUI \n");
		printf(" 2) NON\n");
		scanf("%d", &continuer);
		if(continuer == 1) {
			continue;
		}else if(continuer == 2){
			printf("au revoir !!\n");
			break;
		}else{
			printf(" reessayez !!! \n");
			goto want_continue;
		}

	}
}


/** 

 * La sauvegarde dans le fichier 
 */

FILE * sauvegarde(char* file_name){
    FILE *file = fopen(file_name, "w");
    if(file != NULL){
        printf("sauvegarde !!!!!!!!!!!!!!!\n");
        Etud* etud = pEtud ->next;
        char id_string[10]; 
        char note_string[10];

        while(etud != NULL){
            gcvt(etud->num, 10, id_string);
            fputs(id_string, file);
            fputs(",", file);
            fputs(etud->nom, file);
            fputs(",", file);
            fputs(etud->prenom, file);
            fputs(",", file);
            gcvt(etud->note, 10, note_string);
            fputs(note_string, file);
            fputs("\n", file);
        etud = etud->next;
    }
    fclose(file);
  
    }
    return file;
}


/** 

 * Chargement du fichier

 */
void chargement (char* file_name){
	FILE* file = NULL;
	char line[100];
	char* prenom;
	char* nom;
	char* token;
	int num;
	float note;

	file = fopen(file_name, "r+");

	if(file != NULL){
		printf(" chargement ... \n");
		while(fgets(line, 100, file) != NULL){
			Etud* etud = malloc(sizeof *etud);

			token = strtok(line, ",");
			num = atoi(token);

			token = strtok(NULL, ",");
			nom = token;

			token = strtok(NULL, ",");
			prenom = token;
			

			token = strtok(NULL, ",");
			note = strtod(token, NULL);

			add_etud(nom, prenom, note);
			etud->num = num;

		}
	}
}

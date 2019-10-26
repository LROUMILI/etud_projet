#include<stdlib.h>
#include<string.h>
#include "etud.h"


/** 

 * \brief Fonction qui permet d'afficher tout les etudiants.

 */
void print_list(){
  printf(" Liste des etudiants \n ");
  if(pEtud == NULL){
  	printf("Liste vide !\n");
  }
  Etud* etud = pEtud ->next;

  while(etud != NULL){
  	printf("id : %d  \n Nom : %s \n Prenom : %s \n Note : %f \n",etud->num, etud->nom,etud->prenom,etud->note );
  	etud = etud->next;

  }

}


/** 
 * fn add_etud

 * \brief Fonction de création d'un nouveau etudiant.
 *
 * \param nom: char, Nom de l'étudiant.
 * \param prenom: char, Prenom de l'étudiant.
 * \param note: Float, la note de l'étudiant.
 * \return l'étudiant ajouter.
 */
int add_etud(char* nom, char* prenom, float note){
	Etud* temp = malloc(sizeof(Etud));
	temp -> num = num_etud++;
	strcpy(temp -> nom , nom);
	strcpy(temp -> prenom , prenom);
	temp -> note = note;
	temp -> next = pEtud->next;
	pEtud->next = temp;
    printf("Etudiant ajouté ! \n");

	return 0;
}
/** 
 * fn delete_etud
 * \brief Fonction de suppression d'un etudiant.
 *
 * \param num_etud: int ,le numéro de l'étudiant a supprimer .
 * 
 */
int delete_etud(int num_etud){
	Etud* etud = pEtud;
	Etud* etud_prev = NULL;
	while(etud != NULL){
		if(etud_prev == NULL && etud->num == num_etud){
			Etud* temp = etud;
			etud = etud->next;
			free(temp);


		}
		if(etud->num != num_etud){
			etud_prev = etud;
			etud = etud->next;
		}
		else{
			Etud* temp = etud;
			etud_prev->next = etud->next;
			free(temp);
		}
  	
  }
  return 0;

}
/** 

 * \brief Fonction de Recherche d'un etudiant par son numéro.
 *
 * \param num_etud: int, numéro de l'étudiant qu'on cherche.
 */

int search_etud(int num_etud){
	Etud* etud = pEtud;
	printf("RESULTAT DE RECHERCHE ETTUDIANT AVEC LE NUMERO : %d \n",num_etud);
	while(etud != NULL){

		if(etud->num == num_etud){
			printf("Nom : %s \n Prenom : %s \n Note : %f \n", etud->nom,etud->prenom,etud->note);
			return 0;
			}
		etud = etud->next;

  	
  }
  printf("N'EXISTE PAS !\n");
  return -1;

}
/** 
 
 * \brief Fonction qui permet de modifier la note d'un etudiant.
 *
 * \param num_etud: int, numéro de l'étudiant au quel on veut changer la note.
 * \param new_note: float, la nouvelle valeure de la note.
 */

int edit_etud(int num_etud, float new_note){
	Etud* etud = pEtud;

	while(etud != NULL){

		if(etud->num == num_etud){

			etud->note = new_note;
			return 0;
			}
		etud = etud->next;

  	
  }
  printf("CET ETUDIANT N'EXISTE PAS !\n");

  return -1;

}
/**
 * \brief Fonction de calcul de la moyenne des etudiants.
 * \return moyenne.
 */
float moyenne_classe(){
	float sum = 0;
	int nombre_etud = 0;
	Etud* etud = pEtud;

	while(etud != NULL){
		sum +=etud->note;
		printf("--------------- \n");
		etud = etud->next;
		nombre_etud++;
  }

  return sum/(nombre_etud-1);
}
/** 
 
 * \brief Fonction de recherche d'un etudiant a parir d'une chaine de caractére.
 *
 * \param search_nom: char, la chaine de caractére qui correspond a ce qu'on veut chercher.
 */
int search_joker(char* search_nom){
	Etud* etud = pEtud;
	printf("RESULTAT DE RECHERCHE ETTUDIANT AVEC LE NOM : %s \n",search_nom);
	while(etud != NULL){
		if(strstr(etud->prenom,search_nom) != NULL){
			printf("id : %d  \n Nom : %s \n Prenom : %s \n Note : %f \n",etud->num, etud->nom,etud->prenom,etud->note );
		}

		etud = etud->next;
	
  }
  return 0;
}

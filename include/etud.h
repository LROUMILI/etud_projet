#include <stdio.h>

typedef struct etud
{
  unsigned int num;
  char  nom[50];
  char  prenom[50];
  float note;
  struct etud* next;
}Etud;


/*
 * variable global externe
 */

extern Etud* pEtud;
Etud* result_search_joker;
int num_etud;

/** 

 * \brief Fonction qui permet d'afficher tout les etudiants.

 */
void print_list();


/** 
 * fn add_etud

 * \brief Fonction de création d'un nouveau etudiant.
 *
 * \param nom: char, Nom de l'étudiant.
 * \param prenom: char, Prenom de l'étudiant.
 * \param note: Float, la note de l'étudiant.
 * \return l'étudiant ajouter.
 */
int add_etud(char* nom, char* prenom, float note);


/** 
 * fn lire_choix()
 * \brief Fonction qui permet de lire le choix de l'utilisateur.
 *
 * 
 */
int lire_choix();
/** 
 * fn delete_etud
 * \brief Fonction de suppression d'un etudiant.
 *
 * \param num_etud: int ,le numéro de l'étudiant a supprimer .
 * 
 */


int delete_etud(int num_etud);
/** 

 * \brief Fonction de Recherche d'un etudiant par son numéro.
 *
 * \param num_etud: int, numéro de l'étudiant qu'on cherche.
 */

int search_etud(int num_etud);
/** 
 
 * \brief Fonction qui permet de modifier la note d'un etudiant.
 *
 * \param num_etud: int, numéro de l'étudiant au quel on veut changer la note.
 * \param new_note: float, la nouvelle valeure de la note.
 */

int edit_etud(int num_etud, float new_note);

/**
 * \brief Fonction de calcul de la moyenne des etudiants.
 * \return moyenne.
 */
float moyenne_classe();

/** 
 
 * \brief Fonction de recherche d'un etudiant a parir d'une chaine de caractére.
 *
 * \param search_nom: char, la chaine de caractére qui correspond a ce qu'on veut chercher.
 */
int search_joker(char* search_nom);

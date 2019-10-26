# etud_projet
						     **README.TXT**

					*****************************************
					**				       **
					** Application de gestion des etudiants**
					**				       **
					*****************************************
				
						    **** 2019/2020 ****

**************************************************************************************************************************
**************************************************************************************************************************
**************************************************************************************************************************

	*** 1/ Introduction:
		|Ce logiciel simule créer un programme en C permettant de gérer les notes d’étudiants.		|
		|Les informations à enregistrer sont les suivantes : numéro étudiant, nom, prénom et note.	|
		|L’application doit au minimum implémenter les fonctionnalité suivantes : 			|
	 	| * Fonctionnalités  de base : 									|
		|– Menu												|
		|– Ajouter un étudiant à la liste								|
		|– Supprimer un étudiant avec son numéro							|
		|– Calculer la moyenne										|
		|– Rechercher un étudiant avec son numéro							|
	  	|* Fonctionnalités  avancées : 									|
		|– Modifier la note d’un étudiant 								|
		|– Sauvegarder dans un fichier les étudiant afin de rendre les informations persistantes	|
		|– Charger la liste lors de démarrage de l’application						|	
		|– Recherche d’un étudiant par nom en utilisant le caractère joker (*).				|

**************************************************************************************************************************
**************************************************************************************************************************

	 *** 2/ Architecture:

	  |=>Structure de données : Les données saisies sont manipulées dans des structrue C(Liste chainer)  |
	  |  composée d'un numero comme identifiant, nom, prénom et note. 				                           |
		| 											                                                                         	 |
		|												                                                                           |
	  | * Fonctionnalités  de base :									                                                   |
 		|											                                                                             |
    | -Chaque fontionnalité est codée dans une méthode séparément:			                          		 |		
		|												                                                                           |
		|			   			          ********** "Ajout d'un étudiant" **********	                               |
		|												                                                                           |
		|-Cette méthode permet d'ajouter un etudiant avec la saisie de son nom, prenom et sa note.	       |     
		|											                                                                          	 |
	 	|						              ********* "Supprimer un etudiant" **********                             |
		|												                                                                           |
		|-Cette méthode permet de supprimer un etudiant, grace a son numéro etudiant.			                 |
		|	 										                                                                          	 |
		|			              ********** "Recherche d'un étudiant" **********			                           |
		|-Cette méthode permet, a partir d'un numéro d'etudiant de rechercher dans la liste des etudiants  |
		| ,celui correspodant a ce numéro. 								                                                 |
		|									                                                                          			 |
		|										                                                                          		 |
		|* Fonctionnalités  avancées :								                                                  	 |
		|											                                                                             |
		|			          *********** "Modifier la note d’un étudiant" **********			                       |
		|												                                                                           |
		|-cette méthode permet, a partir d'un numéro d'etudiant de modifier la note d'un etudiant	         |
		| dans la liste des etudiants.						                                                   			 |			 
		|												                                                                           |
		|   **Sauvegarder dans un fichier les étudiant afin de rendre les informations persistantes**	     |
		|												                                                                           |
		|-cette méthode permet de sauvegarder les informations apres le modifier dans un fichier afin de   | 
    | de rendre les informations persistantes.                                                       	 |					                              
		|											                                                                          	 |
		|		            *** Charger la liste lors de démarrage de l’application***                         |
		|											                                                                          	 |
		|-cette méthode permet de charger la liste des etudiants lors de demarrage de l'application :	     |
		|   	<commande> :									                                                            	 |
		|							                                                                          					 |
		|												                                                                           |
		|	       *** Recherche d’un étudiant par nom en utilisant le caractère joker (*)****	             |	                
		|						                                                                                       |                                          
		|-cette méthode permet,a partir d'un nom de rechercher un etudiant et utiliser 			               |
		| le caracter joker(*)										                                                         |
		|											                                                                           	 |
		|		     		              ****** compilation et execution de programme*******	                     |
		|												                                                                           |
		|-la compilation de projet est faite via le Makefile inclu dans le projet et qui contient une      |
 		| seule cible (Target) : 				                                                        					 |
		|												                                                                           |
    |                           all:									                                                 |
		|			 	gcc appli.h appli.c etud.h etud.c main.c			                                             |
		|												                                                                           |
		|-suite a la compilation , le fichier de sortie executable a le nom par defaut :"a.out", 	         |			
		|  et peut être executer comme suit:							                                               	 |
		|					                          ./a.out							                                           |
		|												                                                                           |
		|--------------------------------------------------------------------------------------------------|												 
		





*************************************************************************************************************************
*************************************************************************************************************************
*************************************************************************************************************************

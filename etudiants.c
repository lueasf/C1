#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nom[50];
    char prenom[50];
    int age;
    int ID;
}Etudiant;

int main(){
    Etudiant etds[100]; // maximum 100 étudiants.
    int nbdets = 0;
    Etudiant p1;
    int boo = 1; //continuer
    int saisie;
    while(boo == 1){
        printf("\n 1. Ajouter un nouvel étudiant\n 2. Afficher les informations de tous les étudiants\n 3. Rechercher un étudiant par ID\n 4. Supprimer un étudiant par ID\n 5. Quitter \n");
        scanf("%d", &saisie);

        switch(saisie){
            case 1: 
                printf("Entrez le nom de l'étudiant : \n");
                scanf("%s", etds[nbdets].nom);
                printf("Entrez le prénom de l'étudiant : \n");
                scanf("%s", etds[nbdets].prenom);
                printf("Entrez l'âge de l'étudiant : \n");
                scanf("%d", &etds[nbdets].age);
                printf("Entrez l'ID de l'étudiant : \n");
                scanf("%d", &etds[nbdets].ID);     
                printf("L'etudiant %s %s a été ajouté avec succès.\n\n", p1.nom , p1.prenom);                           
                nbdets ++ ;
                break;
            case 2:
                printf("Informations sur les étudiant : \n");
                for (int i = 0; i< nbdets; i ++){
                    printf("ID : %d, Nom : %s, Prenom : %s, Age : %d", etds[i].ID, etds[i].nom, etds[i].prenom, etds[i].age);
                    putchar('\n');
                }
                break;
            case 3:
                printf("Entrez l'ID de l'étudiant à rechercher.\n");
                int idrec;
                scanf("%d", &idrec);
                int trouve = 0; // on ne l'a pas encore trouvé
                for (int i = 0; i <nbdets; i++){
                    if (etds[i].ID == idrec){
                        printf("ID : %d, Nom : %s, Prenom : %s, Age : %d", etds[i].ID, etds[i].nom, etds[i].prenom, etds[i].age);
                        trouve = 1;
                        break;
                    }
                    if (trouve == 0){
                        printf("Aucun étudiant trouvé.\n");
                    }
                    break;
                }

                break;
            case 4:
                printf("Entrez l'ID de l'étudiant à supprimer.\n");
                int sup;
                scanf("%d", &sup);
                int indice = -1;
                for (int i = 0; i<nbdets; i++){
                    if (etds[i].ID == sup){
                        indice = i;
                        break;
                    }
                }
                if (indice != -1){
                    for (int i = indice; i <nbdets; i++){
                        etds[i] = etds[i+1];
                    }
                    nbdets --;
                    printf("Létudiant a été supprimé.\n");
                }
                else{
                    printf("Non trouvé.\n");
                }
                break;
            case 5:
                boo = 0;
                break;
        }
    }
    return 0;
}
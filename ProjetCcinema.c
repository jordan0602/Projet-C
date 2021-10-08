#include <cs50.h>
#include <stdio.h>


int main(void)
{
    string categorieENFANT[] = {"catégorie enfant", "Pokemon", "Moi moche et mechant", "Les bagnoles"}; //// je créée mes tableaux pour assigner mes films aux catégories
    string categorieADO[] = {"catégorie adolescent", "Star Wars", "Harry Potter", "Avengers"};
    string categorieADULTE[] = {"catégorie adulte", "The Shinning", "La Nonne", "Conjuring"};
    int age = get_int("Quel âge as-tu ?\n");// Nous posons la question afin de récupérer le INT servant a rentrer dans les différentes catégories


    if (age < 11) // si l'âge est inférieur à 11 ans je rentre dans cette boucle
    {
        printf("vous avez %i ans, vous êtes donc dans la %s.\n", age, categorieENFANT[0]);//Nous donnons ici la catégorie
        int choix = get_int("Souhaitez vous aller voir %s ? tapez 0 pour oui ou 1 pour non.\n", categorieENFANT[1]); //premiere proposition de film
        if (choix == 0)
        {
           printf("Bon film !\n"); //le choix est validé, nous nous arretons içi
        return (1);
    }
    if (choix == 1)
    {
        choix = get_int("Souhaitez vous aller voir %s ? tapez 0 pour oui ou 1 pour non.\n", categorieENFANT[2]); //la personne a refusé le choix nous reproposons un nouveau choix en allant chercher l'element suivant du tableau
        }
        if (choix == 0)
        {
            printf("Bon film !\n"); //le choix est validé
            return (1);//nous nous arretons ici
        }
        if (choix == 1)
        {
            choix = get_int("Souhaitez vous aller voir %s ? tapez 0 pour oui ou 1 pour non.\n", categorieENFANT[3]); //nouvelle proposition
        }
        if (choix == 0)
        {
            printf("Bon film !\n");//choix validé
            return (1);//nous nous arretons ici
        }
        if (choix == 1)
        {
            printf("Nous n'avons pas d'autre disponible revenez plus tard :) !\n");// toute les propositions ont été réfusés, plus de choix disponible
            return (1);//nous nous arretons içi

        }

    }
    if (age >= 11 && age <= 17) //si l'age est compris entre 11 et 17 ans je rentre dans cette boucle
    {
        printf("vous avez %i ans, vous êtes donc dans la %s.\n", age, categorieADO[0]);//nous donnons la catégorie a la personne
        int choix = get_int("Souhaitez vous aller voir %s ? tapez 0 pour oui ou 1 pour non.\n", categorieADO[1]);//premiere proposition
        if (choix == 0)
        {
            printf("Bon film !\n");//premier choix validé
            return (1);//nous nous arretons içi
        }
        if (choix == 1)
        {
            choix = get_int("Souhaitez vous aller voir %s ? tapez 0 pour oui ou 1 pour non.\n", categorieADO[2]);//Nouvelle proposition car choix précédent refusé
        }
        if (choix == 0)
        {
                            printf("Bon film !\n");//choix validé
                            return (1);//nous nous arretons içi
                        }
                        if (choix == 1)
                        {
                             choix = get_int("Souhaitez vous aller voir %s ? tapez 0 pour oui ou 1 pour non.\n", categorieADO[3]);
                        }
                         if (choix == 0)
                        {
                            printf("Bon film !\n");
                            return (1);
                        }
                         if (choix == 1)
                        {
                            printf("Nous n'avons pas d'autre film disponible revenez plus tard :) !\n");
                            return (1);

                        }

        }
        if (age >= 18) //si l'age est supérieur a 18 je rentre dans cette boucle
        {
            printf("vous avez %i ans, vous êtes donc dans la catégorie adulte.\n", age);
             int choix = get_int("Souhaitez vous aller voir %s ? tapez 0 pour oui ou 1 pour non.\n", categorieADULTE[1]);
                    if (choix == 0)
                    {
                        printf("Bon film !\n");
                        return (1);
                    }
                    if (choix == 1)
                        {
                            choix = get_int("Souhaitez vous aller voir %s ? tapez 0 pour oui ou 1 pour non.\n", categorieADULTE[2]);
                        }
                         if (choix == 0)
                        {
                            printf("Bon film !\n");
                            return (1);
                        }
                        if (choix == 1)
                        {
                             choix = get_int("Souhaitez vous aller voir %s ? tapez 0 pour oui ou 1 pour non.\n", categorieADULTE[3]);
                        }
                         if (choix == 0)
                        {
                            printf("Bon film !\n");
                            return (1);
                        }
                         if (choix == 1)
                        {
                            printf("Nous n'avons pas d'autre film disponible revenez plus tard :) !\n");
                            return (1);
                        }
        }
}

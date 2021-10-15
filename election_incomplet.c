#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, nbr;
    char vote[100];

    printf("Entrez le nombre total d'électeurs : (100 étant le maximum)\n");
    scanf("%i", &nbr);
    printf("\n");

    for(i = 0; i < nbr; i++)
    {
       printf("Vote de l'electeur n° %i: ", i+1);
       scanf("%s", &vote[i]);
    }

    for(i = 0; i < nbr; i++)
    printf("%s ", &vote[i]);
}

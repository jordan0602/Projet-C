#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr;

    printf("Entrez le nombre total d'électeurs : (100 étant le maximum)\n");
    scanf("%i", &nbr);
    printf("\n");

    char vote[nbr][100];

    for(int i = 0; i < nbr; i++)
    {
       printf("Vote de l'electeur n° %i: ", i+1);
       scanf("%s", vote[i]);

    }

    for(int i = 0; i < nbr; i++)
    {
    printf("%s ", vote[i]);
    }
}

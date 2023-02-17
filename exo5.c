#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int ordre,couleur,position,deb,fin;
    do
    {
        printf("\ndonner l'ordre de la matrice");
        scanf("%d",&ordre);
        if (ordre<5)
        {
            printf("\nL’ordre de la matrice est un entier et est supérieur à 5\n");
        }
        
    } while (ordre<5);

    printf("\nChoisir une couleur\n");
    do
    {
        printf("\n1.Bleu");
        printf("\n2.Rouge");
        printf("\nDonner votre reponse:");
        scanf("%d",&couleur);
    } while (couleur!=1 && couleur!=2);
    printf("\nChoisir la position\n");
    do
    {
        printf("\n1.Haut");
        printf("\n2.Bas");
        printf("\nDonner votre reponse:");
        scanf("%d",&position);
    } while (position!=1 && position!=2);

    
    printf("\nOrdre=%d",ordre);
    printf("\nCouleur:");
    char* bleu="\033[31m";
    char* rouge="\033[34m";
    char * orange="\33[33m";
    char cop[9];
    if(couleur==1)
    {
        printf("Bleu\n");
        strcpy(cop, bleu);
    }
    else
    {
        printf("Rouge\n");
        strcpy(cop, rouge);
    }
    printf("Position:");
    if(position==1)
    {
        printf("Haut\n");
    }
    else
    {
        printf("Bas\n");
    }
    char c='b';
    if (position==1)
    {
        for (int i = 0; i < ordre; i++)
        {
            for (int j = 0; j < ordre; j++)
            {
                if(j>i)
                    printf("%s%c\t",cop,c);
                else
                    printf("%s%c\t",orange,c);
            }
            printf("\n");
        }
        
    }
    else
    {
        for (int i = 1; i <ordre; i++)
        {
            for (int j = 0; j < ordre; j++)
            {
                if(j<i)
                    printf("%s%c\t",cop,c);
                else
                    printf("%s%c\t",orange,c);
            }
            printf("\n");
        }

    }
        
    return 0;
}

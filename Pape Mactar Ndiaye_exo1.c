#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MaxMs 20
int main(int argc, char const *argv[])
{
    const char MoisFr[][MaxMs]={"janvier","fevrier","Mars","Avril","Mai","Juin","Juillet","Aout","Septembre","Octobre","Novembre","Decembre"};
    const char MoisEn[][MaxMs]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int resp,i=0,tp=0,j;
    char **cache;
    int nbrEl;
    do
    {
        printf("\n1.Mois en Francais");
        printf("\n2.Mois en Anglais");
        printf("\n3.Quitter");
        printf("\nDonner une valeur:");
        scanf("%d",&resp);
        if (resp<0)
        {
            printf("\nVotre valeur est negative \nVous devez saisir une des valeurs sur le menu\n");
        }else if(resp>3)
        {
            printf("\nNon pris en compte\n");
        }
        
        

    } while (!(resp==1 || resp==2 || resp==3));
     
    switch (resp)
    {
    case 1:
        {
            printf("\nLes mois en Francais\n");
            nbrEl=sizeof(MoisFr)/sizeof(MoisFr[0]);
            cache=malloc(sizeof(char*[nbrEl]));
            for (int i = 0; i < nbrEl; i++)
            {
                cache[i]=malloc(strlen(MoisFr[i])*sizeof(char)+1);
                strcpy(cache[i],MoisFr[i]);
            }
        }    
        break;
    case 2:
        {
            printf("\nLes mois en Anglais\n");
            nbrEl=sizeof(MoisEn)/sizeof(MoisEn[0]);
            cache=malloc(sizeof(char*[nbrEl]));
            for (int i = 0; i < nbrEl; i++)
            {
                cache[i]=malloc(strlen(MoisEn[i])*sizeof(char)+1);
                strcpy(cache[i],MoisEn[i]);
            }
        }
        break;
    default:
        case 3:
            {   
            printf("\nLes mois sont par defaut en Francais\n");
            nbrEl=sizeof(MoisFr)/sizeof(MoisFr[0]);
            cache=malloc(sizeof(char*[nbrEl+1]));
            for (int i = 0; i < nbrEl; i++)
            {
                cache[i]=malloc(strlen(MoisFr[i])*sizeof(char)+1);
                strcpy(cache[i],MoisFr[i]);
            }
            }
        break;
    }
    for (int i = 0; i < 75; i++)
    {
        printf("_");
    }
    printf("\n");

    for (int i = 0; i <3; i++)
    {
        printf("|");
        j=i;
        for (int k = 1; k < nbrEl-3; k++)
        {
            printf("%15s|",cache[j]);
            j+=3;
        }
        printf("\n");
        for (int i = 0; i <75; i++)
        {
            printf("_");
        }
        printf("\n");
    }
    return 0;
}

#include "fct.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char phr[N],c;
    // char **res;
    int i=0,length,pos;
        printf("\ndonner une phrase:");
        char p[N];
        do
        {
            scanf("%c",&c);
            p[i]=c;
            i++;
        }while(c!='\n');
        printf("\nVous avez saisie %s",p);
        printf("\n le nombre de phrase est %d",nbrPts(p));
        corriger(p);
        printf("\nphrase rectifie\n");
        printf("%s",p);
        
    return 0;
}


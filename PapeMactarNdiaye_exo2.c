#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* razSpace(char *phr);
int main(int argc, char const *argv[])
{
    char phr[200],cop[200];
    printf("Donner une phrase:");  
    gets(phr);
    printf("%ld",strlen(phr));
    strcpy(phr,razSpace(phr));
    printf("%s",cop);
    return 0;
}

char* razSpace(char* phr){
    char cop[200];
    int j=0;
    for (int i = 0; i < strlen(phr); i++)
    {
        printf("%d\n",i);
        if (phr[i]==phr[i+1] && phr[i]!=' ')
        {
            cop[j]=phr[i+1];
            j++;
            
        }
    }
    return cop;
    
}

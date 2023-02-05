#include "fct.h"
char carSpec[]={'&','*','@','[',']','{','}','\\',
'^',':','=','/','<','>','(',')','%','+','-',';','\'',
'~',',','$','.','#','_',';',',','"','\0'};

int longChaine(const char* chaine)
{
    int i=0;
    while (chaine[i]!='\0')
    {
        i++;
    }
    return i;
}
int checkChaine(const char* chaine)
{

    int check=1,trouve,i=0,j;
    if (chaine[0]<'A' || chaine[0]>'Z')
    {
        //printf("\nUne phrase commence par une lettre majuscule\n");
        check=-1;
    }   
    else if(chaine[longChaine(chaine)-1]!='.' || chaine[longChaine(chaine)-1]!='?'|| chaine[longChaine(chaine)-1]!='!')
    {
        //printf("\nUne phrase se termine par un point(.)");    
        check=0;
    }
    else{
         i=0;
        while(i < longChaine(chaine) && trouve)
        {
            j=0,trouve=1;
            while (trouve && j<longChaine(carSpec))
            {
                if (carSpec[j]==chaine[i])
                {
                    trouve=0;
                }
                
                j++;
            }
            i++;
        }
        if(!trouve)
           check=2;

    }
    return check;
        
}

#include "fct.h"
#include <stdio.h>

char carSpec[]={'&','*','@','[',']','{','}','\\',
'^','=','/','<','>','(',')','%','+','-','\'',
'~','$','#','_','"','\0'};

int longChaine(const char* chaine)
{
    int i=0;
    while (chaine[i]!='\0')
    {
        i++;
    }
    return i;
}

int majuscule(const char* chaine)
{
    return (chaine[0]<'A' || chaine[0]>'Z') ? 0 :1;
}
int tailleMinimal(const char* phr){
    return longChaine(phr)<25 ? 1 :0;
}
int finPhrase(const char* chaine)
{
    
    return (chaine[longChaine(chaine)-1]=='.' || chaine[longChaine(chaine)-1]=='?'|| chaine[longChaine(chaine)-1]=='!') ? 1 :0;
}
int caracSpecial(const char* chaine)
{
    int i=1,check=1,trouve=1,j;
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
        if(trouve)
           i=-1;
    return i;

}
int checkChaine(const char* chaine)
{

    int res=0;
    if (!majuscule(chaine))
    {
        //printf("\nUne phrase commence par une lettre majuscule\n");
        res=-1;
    }   
    else if(!finPhrase(chaine))
    {        //printf("\nUne phrase se termine par un point(.)");    
        res=-2;
    }
    else if(!caracSpecial(chaine)){
        res=1;
    }
    else if (!tailleMinimal(chaine))
    {
        res=2;
    }
    
    return res;
        
}
void copyChaine(const char* chaine, char* res){
    for (int i = 0; i < longChaine(chaine); i++)
    {
        res[i]=chaine[i];
    }

}
void copyChaineBis(const char* source, char* dest,int pos)
{
    if (pos<=longChaine(source)&& pos>0)
    {
        for (int i = pos; i < longChaine(source); i++)
        {
            dest[i]=source[i];
        }
        
        
    }
    
}
int nbrPts(const char* chaine)
{
    int j=0;
    for (int i = 0; i < longChaine(chaine); i++)
    {
        if (chaine[i]=='.')
        {
            j++;
        }
            
    }
    return j;
}


void scinder(const char* phr,char **res){
    int j=0,k=0;
    printf("\nLongueur=%d\n",longChaine(phr));
    for (int i = 0; i < longChaine(phr); i++)
    {
    printf("\nEntree i=%d j=%d\n",k,j);
        if (phr[i]!='.')
        {
            printf("\nphr[%d]=%c",i,phr[i]);
            j++;
        }
        else
        {
            k++;
            j=0;
        }
        res[k][j]=phr[i];
    
    printf("\nres[%d][%d]=%c",k,j,res[k][j]);
    }
    

}

void corriger(char* phr){
    int length=longChaine(phr);
    int cpt;
    for (int i =length; i>=0; i--)
    {
        cpt=0;
        if (phr[i]=='.')
        {
            cpt++;
            if (cpt<25)
            {
                phr[i]=',';
            }
        }        
    }
    phr[length-3]='.';
/*     while (caracSpecial(phr!=-1))
    {
    }
 */        

}
void supprimerChar(char* phr,char h,int pos)
{
 for (int i = pos; i < longChaine(phr); i++)
 {
    if (phr[i]==h)
    {
        for (int  j = 1; j < longChaine(phr); j++)
        {
            phr[i]=phr[i+1];
        }
        
    }
    
 }
    
}
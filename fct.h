#define N 1000
int checkChaine(const char* chaine);
int longChaine(const char* chaine);
int majuscule(const char* chaine);
int finPhrase(const char* chaine);
int caracSpecial(const char* chaine);
int tailleMinimal(const char* phr);
void copyChaine(const char* chaine, char* cop);
void copyChaineBis(const char* source, char* dest,int pos);
void razChaine(char* chaine);
int nbrPts(const char* chaine);
void scinder(const char* phr,char **res);
void corriger(char* phr);

void supprimerChar(char* phr,char h,int pos);
#include <stdio.h>
#include "fct.h"
int main(int argc, char const *argv[])
{
    const char *phr={"Les amis je @ vous salue."};
    /* printf("\n%s",phr);
    printf("\nlongueur=%d",longChaine(phr));
    checkChaine(phr); */

    printf("\n%d\n",checkChaine(phr));

    return 0;
}


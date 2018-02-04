#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "fonctions.h"

int main()
{
    char mot[100];
    int base =0;
    printf("Tapez votre mot pour le convertir en Binaire :");
    scanf("%s",mot);
    printf("Tapez la base voulu :");
    scanf("%d",&base);
    printf("Le mot \"%s\" est écrit de cette manière à la base %d : \n",mot,base);
    BinaireP motBit= converterP(mot,base);
    AfficherBits(motBit);
    
    return 0;
}
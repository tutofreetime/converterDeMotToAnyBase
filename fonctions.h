typedef struct
{
    int **bin;
    int *taille;
}BinaireP;

typedef struct
{
    int bin[100][100];
    int *taille;
}BinaireS;


BinaireP converter(char mot[], int base)
{
    int i=0,j=0;
    int taille;
    int valLettre;
    int tailleDeMot = strlen(mot);
    //Allocation dynamique sur la memoire
    BinaireP tabl;
    tabl.bin =(int **)malloc(tailleDeMot*sizeof(int *));
    tabl.taille =(int *)malloc(tailleDeMot*sizeof(int));//Tableau qui vai garder la taille de chaque case
    while(mot[i]!='\0')
    {
        valLettre = mot[i];//Récuperation de la valeur du mot en caractère
        taille = 8 *((valLettre /127)+1); // TAille pour permettre d'allouer dynamiquement la taille exacte
        tabl.bin[i]=(int *)malloc(taille*sizeof(int));
        tabl.taille[i] = taille;//La taille de chaque ligne de bits

        for(j = 0; j < taille;j++)
        {
            tabl.bin[i][taille-1-j] = valLettre % base;//Mise en place les bits dans les case
            valLettre = valLettre/base;
        }
        i++;
    }

    return tabl;
}
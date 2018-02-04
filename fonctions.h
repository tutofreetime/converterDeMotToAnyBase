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
    int i,j=0;
    int taille;
    int ValLettre;
    int tailleDeMot = strlen(mot);
    //Allocation dynamique sur la memoire
    int **Tabl =(int **)malloc(tailleDeMot*sizeof(int));
    while()
}
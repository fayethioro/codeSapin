#include <stdio.h>
int main ()
{
    /*sapin*/

    int ht, hf ,lr;// hf = hauteur feuille ; ht = hauteur tronc ; lr = longueur racine;
    int i, j , k ; // i=> gere les lignes ; j=> gere les espaces ; k=> gere les symboles
   
        /* code pour le controle de saisie */
    
       printf("Donner la hauteur des feuilles : ");
       scanf("%d", &hf);
       printf("Donner la hauteur du tronc : ");
       scanf("%d", &ht);
       printf("Donner la longueur de la racine: ");
       scanf("%d", &lr);
     while((hf<=0 || hf%2 == 0 )|| (lr<=0 || lr%2 == 0 )|| hf<=0 )
     {
        printf("ATTENTION !!! y'a une ou des erreurs \n");
        printf("la hauteur des feuilles doit etre strictement positive et impaire\n");
        printf("la hauteur du tronc doit etre strictement positive\n");
        printf("la longuer du racine doit etre strictement positive et impaire\n"); 
        printf("Donner le hauteur des feuilles : ");
        scanf("%d", &hf);
        printf("Donner la hauteur du tronc : ");
        scanf("%d", &ht);
        printf("Donner la longueur de la racine: ");
        scanf("%d", &lr);
     }
     // les feuilles
     for ( i = 0; i < hf; i++)

     {
        for ( j = hf-i; j>0 ; j--)
        
            printf(" ");
        
        for ( k = 0; k < (2*i+1); k++)
        
            printf("*");
        printf("\n");
     }
     //le tronc
     for ( i = 0; i < ht; i++)

     {
        for ( j = 0; j<hf ; j++)
        
            printf(" ");
    
        printf("*");
        printf("\n");
     }
    // la racine
    for ( i = 0; i < (hf-(lr/2)) ; i++)
         printf(" ");

    for ( j = 0; j<lr ; j++)
        printf("*");

    printf("\n");
  return 0;
}

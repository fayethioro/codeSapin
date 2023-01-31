#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* Sablier */
    int n ;// la taille du sablier
    int i, j , k=1;
     
       do
       {
        /* controle de saisie*/
        printf("Donner la taille du sablier :");
        scanf("%d",&n);
        if(n<=0)
        {
           printf("ATTENTION !!! y'a une ou des erreurs \n");
           printf("la taille du sablier doit etre strictement positive\n");
           printf("Donner la taille du sablier :");
           scanf("%d",&n); 
        }
       } while (n<0);
       for ( i = 1; i <= n; i++)
       {
            for (j = 1; j <= n; j++)
            {
                if (j>=k && j<= (n-k+2))
                printf("*");
                else
                printf(" ");
            }
            if(i<=n/2)
                k++;
            else
              k--;
            printf("\n");
       }

    return 0;
}

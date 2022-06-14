/*
Declare dos arrays de 5 enteros cada uno, llamados A y B, luego en un tercer array de igual dimensión llamado S almacene la suma
de los dos anteriores.
*/
#include <stdio.h>

int main()
{
    int A[5];
    int B[5];
    int S[5];
    int i;
    
    printf("Ingrese los valores de A:\n");
    for(i = 0; i < 5; i++)
    {
        printf("> ");
        scanf("%d", &A[i]);
    }
    
    printf("Ingrese los valores de B:\n");
    for (i = 0; i < 5; i++)
    {
        printf("> ");
        scanf("%d", &B[i]);
    }
    
    for (i = 0; i < 5; i++)
    {
        S[i] = A[i] + B[i];
    }
    
    printf("A + B = ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", S[i]);
    }
    return 0;
}

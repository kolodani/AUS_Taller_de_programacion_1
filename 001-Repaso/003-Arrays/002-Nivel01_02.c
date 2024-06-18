// Declare dos arrays de 5 enteros cada uno, llamados A y B, luego en un tercer array de igual dimensión llamado S almacene la suma de los dos anteriores.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int A[5], B[5], S[5];
    srand(time(NULL));

    printf("Valores del arreglo A:\n");
    for (int i = 0; i < 5; i++)
    {
        A[i] = rand() % 11;
        printf("%d ", A[i]);
    }
    printf("\n");
    printf("Valores del arreglo B:\n");
    for (int i = 0; i < 5; i++)
    {
        B[i] = rand() % 11;
        printf("%d ", B[i]);
    }
    printf("\n");
    printf("Valores del arreglo S:\n");
    for (int i = 0; i < 5; i++)
    {
        S[i] = A[i] + B[i];
        printf("%d ", S[i]);
    }
    return 0;
}

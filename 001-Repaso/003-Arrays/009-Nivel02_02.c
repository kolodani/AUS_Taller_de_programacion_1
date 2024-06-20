// Permita la carga aleatoria de dos arrays de 10 enteros cada uno, llamados A y B, e indique cual de los dos tiene más números pares tratando de utilizando como máximo dos bucles for en todo el programa.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(int argc, char const *argv[])
{
    int A[N], B[N];
    int parA = 0, parB = 0;
    srand(time(NULL));

    printf("Arreglo A: ");
    for (int i = 0; i < N; i++)
    {
        A[i] = rand() % 11;
        if (A[i] % 2 == 0)
        {
            parA++;
        }
        printf("%d ", A[i]);
    }

    printf("\n");
    printf("Arreglo B: ");
    for (int i = 0; i < N; i++)
    {
        B[i] = rand() % 11;
        if (B[i] % 2 == 0)
        {
            parB++;
        }
        printf("%d ", B[i]);
    }

    printf("\n");
    if (parA > parB)
    {
        printf("El arreglo A tiene mas pares que el arreblo B: %d contra %d", parA, parB);
    }
    else if (parB > parA)
    {
        printf("El arreglo B tiene mas pares que el arreblo A: %d contra %d", parB, parA);
    }
    else
    {
        printf("Los dos arreglos tienen las misma cantidad de pares: %d y %d", parA, parB);
    }

    return 0;
}

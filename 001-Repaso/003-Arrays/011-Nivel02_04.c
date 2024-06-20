// Dado un array A de 10 enteros cargados automáticamente (con números aleatorios), invertir el array, es decir si se tiene el array
// A = [ 45, 11, -5, 80, 6, 99, 105, -200, 22, 1 ], A deberá quedar del siguiente modo al finalizar el programa
// A = [ 1, 22, -200, 105, 99, 6, 80, -5, 11, 45 ].Considere el uso de una variable a modo de pivote.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(int argc, char const *argv[])
{
    int A[N];
    int aux;

    srand(time(NULL));

    printf("Arreglo A:\n");
    printf("A = [ ");
    for (int i = 0; i < N; i++)
    {
        A[i] = rand() % 101;
        printf("%d ", A[i]);
    }
    printf("]\n");

    for (int i = 0; i < (N / 2); i++)
    {
        aux = A[N - (i + 1)];
        A[N - (i + 1)] = A[i];
        A[i] = aux;
    }

    printf("Arreglo A invertido:\n");
    printf("A = [ ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    printf("]\n");

    return 0;
}

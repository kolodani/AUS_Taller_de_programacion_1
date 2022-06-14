/*
Dado un array A de 10 enteros cargados automáticamente (con números aleatorios),
invertir el array, es decir si se tiene el array
A= [ 45, 11, -5, 80, 6, 99, 105, -200, 22, 1 ], A deberá quedar del siguiente modo al finalizar el programa
A= [ 1, 22, -200, 105, 99, 6, 80, -5, 11, 45 ]. Considere el uso de una variable a modo de pivote.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
    // Declaro variables
    int i;
    int A[N];
    int pivote;
    srand (time(NULL));
    // Declaro array
    printf("Array original:\n");
    printf("{ ");
    for (i = 0; i < N; i++)
    {
        A[i] = rand();
        printf("%d ", A[i]);
    }
    printf("}\n");
    // Invierto array
    for (i = 0; i < N/2; i++)
    {
        pivote = A[i];
        A[i] = A[N-1-i];
        A[N-1-i] = pivote;
    }
    // Imprimo array
    printf("El array invertido es: \n");
    printf("{ ");
    for (i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    printf("}\n");
    return 0;
}

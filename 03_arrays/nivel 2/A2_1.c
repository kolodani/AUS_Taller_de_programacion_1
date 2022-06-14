/*
Permita la caga de una array de 30 enteros aleatorios. Luego mostrarlos por pantalla.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 30

int main()
{
    int A[N];
    int i;
    srand(time(NULL));
    
    // declaracion de arrays
    for (i = 0; i < N; i++)
    {
        A[i] = rand() % 100;
    }
    // muestro los valores de los arrays
    printf("El array A es: \n");
    printf("[ ");
    for (i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    printf("]\n");
    
    return 0;
}

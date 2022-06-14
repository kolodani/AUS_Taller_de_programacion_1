/*
Permitir la carga automática de una matriz de dimensión NxN y mostrarla por pantalla.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
    // Declaracion de variables
    int matriz[N][N];
    srand (time(NULL));
    int i, j;
    // Ingreso de valores a la matriz
    printf("Muestra de una matriz %dx%d\n", N, N);
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            matriz[i][j] = rand() % 100;
        }
    }
    // mostrar matriz
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (matriz[i][j] < 10)
            {
                printf("0%d ", matriz[i][j]);
            }
            else if (matriz[i][j] >= 10)
            {
                printf("%d ", matriz[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}

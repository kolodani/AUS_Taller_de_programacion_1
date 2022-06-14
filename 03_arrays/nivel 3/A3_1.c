/*
Permitir el ingreso de una matriz de enteros de dimensión 3x4 y mostrarla por pantalla.
*/
#include <stdio.h>
#define M 3
#define N 4

int main()
{
    // Declaracion de variables
    int matriz[M][N];
    int i, j;
    // Ingreso de valores a la matriz
    printf("Ingrese los valores de la matriz 3x4: \n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("Ingrese el valor de la posicion [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    // Impresion de la matriz
    printf("\nMatriz ingresada es: \n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

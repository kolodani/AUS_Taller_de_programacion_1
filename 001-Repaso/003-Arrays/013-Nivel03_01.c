// Permitir el ingreso de una matriz de enteros de dimensión 3x4 y mostrarla por pantalla.

#include <stdio.h>

#define M 3
#define N 4

int main(int argc, char const *argv[])
{
    int matriz[M][N];
    printf("Ingrese los valores enteros en la matriz %dx%d:\n", M, N);
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("Valor %d,%d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nLa matriz %dx%d:\n", M, N);
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Permitir la carga automática de una matriz de dimensión NxN y mostrarla por pantalla.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int ene;
    srand(time(NULL));

    printf("Ingrese el tamaño para la matriz cuadrada de valores random:\n");
    printf("> ");
    scanf("%d", &ene);

    printf("\nMatriz %dx%d aleatoria:\n", ene, ene);
    int matriz[ene][ene];
    for (int i = 0; i < ene; i++)
    {
        printf("[ ");
        for (int j = 0; j < ene; j++)
        {
            matriz[i][j] = rand() % 10;
            printf("%d ", matriz[i][j]);
        }
        printf("]\n");
    }

    return 0;
}

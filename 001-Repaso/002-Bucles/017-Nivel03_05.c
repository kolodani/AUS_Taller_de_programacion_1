// Permita ingresar una matriz cuadrada 4x4 y luego la muestre por pantalla.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int matriz[4][4];
    printf("Ingrese los valores de una matriz 4x4 y la vera en pantalla.\n");
    for (int i = 0; i < 4 ; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Ingrese el valor %d,%d de la matriz:\n", i+1, j+1);
            printf("> ");
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("|%d ", matriz[i][j]);
        }
        printf("|\n");
    }
    return 0;
}

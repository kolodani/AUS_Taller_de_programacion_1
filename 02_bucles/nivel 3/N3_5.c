/*
Permita ingresar una matriz cuadrada 4x4 y luego la muestre por pantalla.
*/
#include <stdio.h>

int main()
{
    int i, j;
    int matriz[4][4];
    
    printf("ingrese los valores de una matriz de 4x4\n");
    
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("> ");
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}

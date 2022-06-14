/*
 Dadas dos matrices de dimensión NxN, llamadas X e Y, mostrar por pantalla la suma de las mismas.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
    // Declaracion de variables
    int matrizX[N][N], matrizY[N][N], i, j;
    srand (time(NULL));
    // Ingreso de valores a la matriz
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            matrizX[i][j] = rand() % 100;
            matrizY[i][j] = rand() % 100;
        }
    }
    // mostrar matrices
    printf("Matriz X:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (matrizX[i][j] < 10)
            {
                printf("0%d ", matrizX[i][j]);
            }
            else if (matrizX[i][j] >= 10)
            {
                printf("%d ", matrizX[i][j]);
            }
        }
        printf("\n");
    }
    printf("Matriz Y:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (matrizY[i][j] < 10)
            {
                printf("0%d ", matrizY[i][j]);
            }
            else if (matrizY[i][j] >= 10)
            {
                printf("%d ", matrizY[i][j]);
            }
        }
        printf("\n");
    }
    printf("Matriz X + Y:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if ((matrizX[i][j] + matrizY[i][j]) < 10)
            {
                printf("00%d ", matrizX[i][j] + matrizY[i][j]);
            }
            else if (((matrizX[i][j] + matrizY[i][j]) > 10) && ((matrizX[i][j] + matrizY[i][j]) < 100))
            {
                printf("0%d ", matrizX[i][j] + matrizY[i][j]);
            }
            else if ((matrizX[i][j] + matrizY[i][j]) > 100)
            {
                printf("%d ", matrizX[i][j] + matrizY[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}





// Dadas dos matrices de dimensión NxN, llamadas X e Y, mostrar por pantalla la suma de las mismas.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(int argc, char const *argv[])
{
    int X[N][N], Y[N][N], Z[N][N];
    srand(time(NULL));

    printf("Matriz X:\n");
    for (int i = 0; i < N; i++)
    {
        printf("[ ");
        for (int j = 0; j < N; j++)
        {
            X[i][j] = rand() % 101;
            if (X[i][j] < 10)
            {
                printf("  %d ", X[i][j]);
            }
            if (X[i][j] < 100 && X[i][j] >= 10)
            {
                printf(" %d ", X[i][j]);
            }
            if (X[i][j] >= 100)
            {
                printf("%d ", X[i][j]);
            }
        }
        printf("]\n");
    }

    printf("Matriz Y:\n");
    for (int i = 0; i < N; i++)
    {
        printf("[ ");
        for (int j = 0; j < N; j++)
        {
            Y[i][j] = rand() % 101;
            if (Y[i][j] < 10)
            {
                printf("  %d ", Y[i][j]);
            }
            if (Y[i][j] < 100 && Y[i][j] >= 10)
            {
                printf(" %d ", Y[i][j]);
            }
            if (Y[i][j] >= 100)
            {
                printf("%d ", Y[i][j]);
            }
        }
        printf("]\n");
    }

    printf("Matriz SUMA:\n");
    for (int i = 0; i < N; i++)
    {
        printf("[ ");
        for (int j = 0; j < N; j++)
        {
            Z[i][j] = X[i][j] + Y[i][j];
            if (Z[i][j] < 10)
            {
                printf("  %d ", Z[i][j]);
            }
            if (Z[i][j] < 100 && Z[i][j] >= 10)
            {
                printf(" %d ", Z[i][j]);
            }
            if (Z[i][j] >= 100)
            {
                printf("%d ", Z[i][j]);
            }
        }
        printf("]\n");
    }

    return 0;
}

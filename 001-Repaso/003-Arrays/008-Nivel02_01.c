// Permita la caga de una array de 30 enteros aleatorios. Luego mostrarlos por pantalla.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 30

int main(int argc, char const *argv[])
{
    int A[N];
    srand(time(NULL));
    printf("Arreglo random de 30 enteros:\n");
    for (int i = 0; i < N; i++)
    {
        A[i] = rand() % 11;
        printf("%d ", A[i]);
        if (i != N - 1)
        {
            printf(",");
        }
    }

    return 0;
}

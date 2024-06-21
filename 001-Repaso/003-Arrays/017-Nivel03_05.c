// Dado un array A de 20 enteros positivos en el rango [0, 100] cargados aleatoriamente,
// y un entero positivo e, determinar si dicho entero e está presente en el array.
// Extender luego el programa para indicar no solo si está, sino también en cuantas ocasiones aparece.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main(int argc, char const *argv[])
{
    int A[N];
    int cantidad = 0;
    srand(time(NULL));
    int entero = rand() % 101;

    printf("El Arreglo A:\n");
    printf("[ ");
    for (int i = 0; i < N; i++)
    {
        A[i] = rand() % 101;
        if (A[i] == entero)
        {
            cantidad++;
        }
        printf("%d ", A[i]);
    }
    printf("]\n");

    printf("El Entero E: %d\n", entero);
    if (cantidad == 0)
    {
        printf("El Entero E no aparece nunca en el arreglo.");
    }
    else
    {
        if (cantidad == 1)
        {
            printf("El Entero E aparece %d vez, en el arreglo A", cantidad);
        }
        else
        {
            printf("El Entero E aparece %d veces, en el arreglo A", cantidad);
        }
    }

    return 0;
}
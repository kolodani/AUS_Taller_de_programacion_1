#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main()
{
    // Declaracion de variables
    int A[N], i, e, cont = 0;
    srand(time(NULL));
    // Ingreso de valores del array
    for (i = 0; i < N; i++)
    {
        A[i] = rand() % 101;
    }
    e = rand() % 101;
    // Impresion del array
    printf("El array es: \n");
    printf("{ ");
    for (i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    printf("}\n");
    // Impresion del entero e
    printf("El entero e es: %d\n", e);
    // Busqueda del entero e en el array
    for (i = 0; i < N; i++)
    {
        if (A[i] == e)
        {
            cont++;
        }
    }
    // Impresion del resultado
    if (cont == 0)
    {
        printf("El entero e no esta en el array\n");
    }
    else if (cont > 0)
    {
        printf("El entero e esta en el array %d veces\n", cont);
    }
    return 0;
}

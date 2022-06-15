/*
Dado un array de 10 enteros positivos en el rango [0, 100] cargados aleatoriamente,
mostrarlo por pantalla, luego ordenar sus elementos de manera ascendente
y finalmente mostrar el resultado.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
    // Declaracion de variables
    int A[N], i, j, aux;
    srand(time(NULL));
    // Ingreso de valores del array
    for (i = 0; i < N; i++)
    {
        A[i] = rand() % 101;
    }
    // Impresion del array
    printf("El array original es: \n");
    printf("{ ");
    for (i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    printf("}\n");
    // ordenamiento del array de forma ascendente
    for (j = 0; j < N; j++)
    {
        aux = A[0];
        for (i = 1; i < N; i++)
        {
            if (A[i]<A[i-1])
            {
                aux = A[i];
                A[i] = A[i-1];
                A[i-1] = aux;
                i--;
            }
        }
    }
    // Impresion del array ordenado
    printf("El array ordenado es: \n");
    printf("{ ");
    for (i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    printf("}\n");
    return 0;
}

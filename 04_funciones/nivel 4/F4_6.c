/*
Implementar el algoritmo de ordenación quick-sort.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 30
int quick_sort(int [], int, int);

int main()
{
    srand(time(NULL));
    int i;
    int A[N];
    for (i = 0; i < N; i++)
    {
        A[i] = rand() % 100;
    }
    printf("el arreglo random es:\n");
    for (i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    quick_sort(A, 0, N - 1);
    printf("\nel arreglo ordenado es:\n");
    for (i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}
// funcion que ordena el arreglo
int quick_sort(int A[], int izq, int der)
{
    int i, j, pivote, aux;
    i = izq;
    j = der;
    pivote = A[(izq + der) / 2];
    do
    {
        while (A[i] < pivote)
        {
            i++;
        }
        while (A[j] > pivote)
        {
            j--;
        }
        if (i <= j)
        {
            aux = A[i];
            A[i] = A[j];
            A[j] = aux;
            i++;
            j--;
        }
    } while (i <= j);
    if (izq < j)
    {
        quick_sort(A, izq, j);
    }
    if (i < der)
    {
        quick_sort(A, i, der);
    }
}
/*
Crear una función recursiva para invertir un array
*/

#include <stdio.h>
#define N 5
int invertir_array(int[], int, int);
int imprimir (int[], int);
int main()
{
    int a[N] = {10, 20, 3, 41, 55};
    int prin = 0, fin = N - 1;
    invertir_array(a, prin, fin);
    return 0;
}

int invertir_array(int a[], int prin, int fin)
{
    int aux;
    int M = 0;
    if (prin == fin)
    {
        imprimir(a, M);
    }
    else
    {
        aux = a[prin];
        a[prin] = a[fin];
        a[fin] = aux;
        invertir_array(a, prin + 1, fin - 1);
    }
}

int imprimir(int a[], int m)
{
    if (N == m)
    {
        return 0;
    }
    else
    {
        printf("%d ", a[m]);
        imprimir(a, m+1);
    }
}
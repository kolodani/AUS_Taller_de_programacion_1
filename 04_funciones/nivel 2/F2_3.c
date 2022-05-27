/*
Dado un array de N enteros, crear una función para invertirlo y
posteriormente mostrarlo por pantalla.
*/

#include <stdio.h>
#define N 10
void cargar(int[]);
void invertir(int[]);
void mostrar(int[]);
int A[N];

int main()
{
    cargar(A);
    printf("\nAntes de invertir: ");
    mostrar(A);
    invertir(A);
    printf("\nDespues de invertir: ");
    mostrar(A);
    return 0;
}

void cargar(int A[])
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("Ingrese el valor %d del arreglo:\n", i + 1);
        printf("> ");
        scanf("%d", &A[i]);
    }
}

void invertir(int A[])
{
    int i, j, aux;
    for (i = 0, j = N - 1; i < j; i++, j--)
    {
        aux = A[i];
        A[i] = A[j];
        A[j] = aux;
    }
}

void mostrar(int A[])
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}


/*
Crear una función que al recibir un array de 10 enteros determine si está ordenado
de manera ascendente.
*/

#include <stdio.h>
#define N 10
void ingresar(int []);
int ascendente(int []);
int A[N];

int main()
{
    ingresar(A);
    ascendente(A);
    return 0;
}

void ingresar(int A[])
{
    int i;
    printf("ingrese los 10 valores enteros al arreglo:\n");
    for (i = 0; i < N; i++)
    {
        printf("ingrese el valor %d: ", i + 1);
        scanf("%d", &A[i]);
    }
}

int ascendente(int A[])
{
    int i, j, aux = 0;
    for (i = 0; i < N; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (A[i] > A[j])
            {
                printf("no esta ordenado de forma ascendente\n");
                aux++;
                return 0;
            }
        }
    }
    if (aux == 0)
    {
        printf("esta ordenado de forma ascendente\n");
    }
}


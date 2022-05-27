/*
Implementar un programa que permita ordenar un array de 10 enteros de forma ascendente
siguiendo algún algoritmo de ordenamiento.
*/

#include <stdio.h>
#define N 10
void ingresar(int []);
void mostrar(int []);
void ordenar(int []);

int A[N];

int main()
{
    printf("ingrese 10 numeros enteros y yo los ordenare por ti\n");
    ingresar(A);
    printf("tu array es: \n");
    mostrar(A);
    ordenar(A);
    printf("tu array ordenado es: \n");
    mostrar(A);
    return 0;
}

void ingresar(int A[])
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("ingrese el numero %d: ",i+1);
        scanf("%d",&A[i]);
    }
}

void ordenar(int A[])
{
    int i,j,aux;
    for (i = 0; i < N-1; i++)
    {
        for (j = i+1; j < N; j++)
        {
            if (A[i] > A[j])
            {
                aux = A[i];
                A[i] = A[j];
                A[j] = aux;
            }
        }
    }
}

void mostrar(int A[])
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
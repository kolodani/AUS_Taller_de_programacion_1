//  Implementar un programa que permita ordenar un array de 10 enteros de forma ascendente
//  siguiendo algún algoritmo de ordenamiento.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void imprimir(int[]);
void ordenado(int[]);

int main(int argc, char *argv[])
{
    srand(time(NULL));
    int arreglo[N];
    printf("El arreglo esta desordenado:\n");
    for (int i = 0; i < N; i++)
    {
        arreglo[i] = rand() % 101;
        printf("%d ", arreglo[i]);
    }
    ordenado(arreglo);
    printf("\nEl arreglo esta ordenado:\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arreglo[i]);
    }
    return 0;
}

void ordenado(int arreglo[])
{
    int aux;
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            if (arreglo[i] > arreglo[j])
            {
                aux = arreglo[i];
                arreglo[i] = arreglo[j];
                arreglo[j] = aux;
            }
        }
    }
}

void imprimir(int arreglo[])
{
    for (int i = 0; i > N; i++)
    {
        arreglo[i] = rand() % 10;
        printf("%d ", arreglo[i]);
    }
}

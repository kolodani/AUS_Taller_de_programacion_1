// Dado un array de 10 enteros positivos en el rango [0, 100] cargados aleatoriamente,
// mostrarlo por pantalla, luego ordenar sus elementos de manera ascendente
// y finalmente mostrar el resultado.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(int argc, char const *argv[])
{
    int arreglo[N];
    int aux;
    srand(time(NULL));

    printf("El arreglo desordenado:\n");
    printf("[ ");
    for (int i = 0; i < N; i++)
    {
        arreglo[i] = rand() % 101;
        printf("%d ", arreglo[i]);
    }
    printf("]\n");

    for (int i = 0; i < (N - 1); i++)
    {
        for (int j = (i + 1); j < N; j++)
        {
            if (arreglo[i] > arreglo[j])
            {
                aux = arreglo[i];
                arreglo[i] = arreglo[j];
                arreglo[j] = aux;
            }
        }
    }

    printf("El arreglo ordenado:\n");
    printf("[ ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arreglo[i]);
    }
    printf("]\n");

    return 0;
}

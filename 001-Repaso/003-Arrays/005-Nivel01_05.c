// Dado un array de 10 floats, mostrar por pantalla cuales elementos superan al promedio.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(int argc, char const *argv[])
{
    float arreglo[N];
    float suma = 0.0;
    float promedio;
    srand(time(NULL));

    printf("Arreglo de 10 flotantes:\n");
    for (int i = 0; i < N; i++)
    {
        arreglo[i] = (rand() % 10000000) / 1000000.0;
        printf("%f ", arreglo[i]);
    }
    printf("\n");
    for (int i = 0; i < N; i++)
    {
        suma += arreglo[i];
    }
    promedio = suma / 10.0;
    printf("El promedio es: %f\n", promedio);
    printf("Y estos valores estan sobre el promedio:\n");
    for (int i = 0; i < N; i++)
    {
        if (arreglo[i] > promedio)
        {
            printf("%f ", arreglo[i]);
        }
    }

    return 0;
}

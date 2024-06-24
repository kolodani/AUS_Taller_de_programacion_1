// Declare un array de 10 enteros en el rango [0, 100] (asegurarlo) y muestre por pantalla dichos elementos junto con la suma, el promedio y la varianza.Investigar sobre los términos que desconozca.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define N 10

int main(int argc, char const *argv[])
{
    int arreglo[N];
    double suma = 0.0;
    double promedio;
    double varianza, suma_varianza = 0.0;
    srand(time(NULL));

    printf("El arreglo de 10 elementos:\n");
    for (int i = 0; i < N; i++)
    {
        arreglo[i] = rand() % 101;
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    for (int i = 0; i < N; i++)
    {
        suma = suma + arreglo[i];
    }
    promedio = suma / N;
    for (int i = 0; i < N; i++)
    {
        suma_varianza = +(arreglo[i] - promedio) * (arreglo[i] - promedio);
    }
    varianza = (suma_varianza / N);
    varianza = sqrt(varianza);

    printf("La suma es: %f\n", suma);
    printf("El Promedio es: %f\n", promedio);
    printf("La varianza es: %f\n", varianza);

    return 0;
}

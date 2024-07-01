// Crear un programa que permita utilizando funciones:
// cargar un array A de 20 enteros con números enteros aleatorios entre 1 y 100,
// mostrarlo por pantalla, calcular la suma de todas sus componentes y el promedio.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void aleatorio(int[]);
void imprimir(int[]);
int suma(int[], int);

#define N 20

int main(int argc, char *argv[])
{
    int arreglo[N];
    int sumado;
    int promedio;
    srand(time(NULL));
    aleatorio(arreglo);
    imprimir(arreglo);
    sumado = suma(arreglo, N);
    promedio = sumado / N;
    printf("La suma es: %d\n", sumado);
    printf("El promedio es: %d\n", promedio);
    return 0;
}

void aleatorio(int arreglo[])
{
    for (int i = 0; i < N; i++)
    {
        arreglo[i] = rand() % 101;
    }
}

void imprimir(int arreglo[])
{
    printf("El arreglo:\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
}

int suma(int arreglo[], int tama)
{
    int sumados = 0;
    for (int i = 0; i < tama; i++)
    {
        sumados += arreglo[i];
    }
    return sumados;
}

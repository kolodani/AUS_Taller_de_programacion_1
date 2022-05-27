/*
Crear un programa que permita utilizando funciones: 
cargar un array A de 20 enteros con números enteros aleatorios entre 1 y 100,
mostrarlo por pantalla, calcular la suma de todas sus componentes y el promedio.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20
int A[N], lasuma=0;
void cargo(int []);
void mostrar(int []);
int suma(int []);
void promedio(int);

int main()
{
    cargo(A);
    mostrar(A);
    lasuma = suma(A);
    promedio(lasuma);
    return 0;
}

void cargo(int A[])
{
    srand(time(NULL));
    int i;
    for (i = 0; i < N; i++)
    {
        A[i] = rand() % 100 + 1;
    }
}

void mostrar(int A[])
{
    int i;
    printf("El arreglo es:\n");
    for (i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
}

int suma(int A[])
{
    int i, suma = 0;
    for (i = 0; i < N; i++)
    {
        suma = suma + A[i];
    }
    printf("\nLa suma es: %d\n", suma);
    return suma;
}

void promedio(int suma)
{
    printf("El promedio es: %d\n", suma/N);
}
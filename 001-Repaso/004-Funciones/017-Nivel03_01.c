// Crear funciones que mediante arrays se emulen operaciones de conjuntos.
// En primer lugar existirán dos arrays A y B de 10 elementos enteros comprendidos en el rango [0. 100].
// Debe crearse una función que cargue los arrays de forma aleatoria pero que no ingrese valores
// repetidos en cada array, es decir debemos controlar en esa función que cuando se propone un
// número aleatorio para almacenar en la posición i del array no esté dicho número en ninguna de
// las posiciones 0, 1, ..., i-1
// Luego de la carga de los arrays mostrarlos por pantalla.
// Crear una función que muestre por pantalla la intersección de estos “conjuntos”,
// es decir los elementos de A que estén presentes en B.
// Crear una función que muestre por pantalla la unión de estos “conjuntos”,
// es decir los elementos pertenecientes a A y B, sin repetir.
// Crear una función que muestre por pantalla la diferencia entre estos “conjuntos”,
// es decir los elementos pertenecientes a A no pertenecientes a B.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void carga(int[]);
void imprimir(int[]);
void interseccion(int[], int[]);
void uniones(int[], int[]);
void diferencia(int[], int[]);

int main(int argc, char *argv[])
{
    int A[N], B[N];
    srand(time(NULL));
    carga(A);
    carga(B);
    imprimir(A);
    imprimir(B);
    interseccion(A, B);
    uniones(A, B);
    diferencia(A, B);
    return 0;
}

void carga(int arreglo[])
{
    for (int i = 0; i < N; i++)
    {
        arreglo[i] = rand() % 101;
        for (int j = 0; j < i; j++)
        {
            if (arreglo[i] == arreglo[j])
            {
                i--;
            }
        }
    }
}

void imprimir(int arreglo[])
{
    printf("El arreglo impreso:\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
}

void interseccion(int A[], int B[])
{
    printf("Interseccion de A en B:\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (A[i] == B[j])
            {
                printf("%d ", A[i]);
            }
        }
    }
    printf("\n");
}

void uniones(int A[], int B[])
{
    printf("Union de A y B:\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    for (int j = 0; j < N; j++)
    {
        int cant = 0;
        for (int k = 0; k < N; k++)
        {
            if (B[j] == A[k])
            {
                cant++;
            }
        }
        if (cant == 0)
        {
            printf("%d ", B[j]);
        }
    }
    printf("\n");
}

void diferencia(int A[], int B[])
{
    printf("Diferencia de A y B:\n");
    for (int i = 0; i < N; i++)
    {
        int cant = 0;
        for (int j = 0; j < N; j++)
        {
            if (A[i] == B[j])
            {
                cant++;
            }
        }
        if (cant == 0)
        {
            printf("%d ", A[i]);
        }
    }
    printf("\n");
}

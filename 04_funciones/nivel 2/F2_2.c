/*
Crear un programa que implemente las siguientes funciones para manipular un array de 10 enteros.
Las siguientes declaraciones de funciones deben utilizarse y definirse adecuadamente.
void cargar(int []); //carga un array con valores suministrados por el usuario
void mostrar(int []); //muestra un array
int pertenece(int [], int); //determina si un entero está en el array
*/

#include <stdio.h>
#define N 10

void cargar(int[]);
void mostrar(int[]);
int pertenece(int[], int);
int A[N], num;

int main()
{
    cargar(A);
    mostrar(A);
    printf("Ingrese un numero y te dire si esta en el arraglo: ");
    printf("> ");
    scanf("%d", &num);
    pertenece(A, num);
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

void mostrar(int A[])
{
    int i;
    printf("Su arreglo es:");
    for (i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int pertenece(int A[], int num)
{
    int i, cont = 0;
    for (i = 0; i < N; i++)
    {
        if (A[i] == num)
        {
            printf("El numero %d esta en el arreglo\n", num);
            cont++;
        }
    }
    if (cont == 0)
    {
        printf("El numero %d no esta en el arreglo\n", num);
    }
}
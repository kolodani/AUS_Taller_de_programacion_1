/*
Permita la carga aleatoria de dos arrays de 10 enteros cada uno, llamados A y B, e indique cual de los dos tiene más números pares
tratando de utilizando como máximo dos bucles for en todo el programa.
*/
#include <stdio.h>
#define N 10

int main()
{
    // Declaración de variables
    int i;
    int contadorA = 0;
    int contadorB = 0;
    int A[N], B[N];
    // Inicialización de arrays y calcular paridad de elementos
    printf("ingrese los numeros 10 enteros del array A:\n");
    for (i = 0; i < N; i++)
    {
        printf("ingrese el valor numero %d del array: \n", i+1);
        printf("> ");
        scanf("%d", &A[i]);
        if (A[i] % 2 == 0)
        {
            contadorA++;
        }
    }
    printf("ingrese los numeros 10 enteros del array B:\n");
    for (i = 0; i < N; i++)
    {
        printf("ingrese el valor numero %d del array: \n", i + 1);
        printf("> ");
        scanf("%d", &B[i]);
        if (B[i] % 2 == 0)
        {
            contadorB++;
        }
    }
    // Imprimir resultado
    if (contadorA > contadorB)
    {
        printf("el array A tiene mas numeros pares que el array B\n");
    }
    else if (contadorB > contadorA)
    {
        printf("el array B tiene mas numeros pares que el array A\n");
    }
    else if (contadorA == contadorB)
    {
        printf("ambos arrays tienen igual cantidad de numeros pares\n");
    }
    
    return 0;
}

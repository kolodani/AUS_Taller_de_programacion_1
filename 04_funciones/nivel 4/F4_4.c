/*
Crear una función recursiva para sumar los elementos de un array
*/

#include <stdio.h>
#define N 10
int suma_array(int[], int, int);


int main()
{
    int a[N], suma = 0;
    printf("ingrese los elementos del array\n");
    for (int i = 0; i < N; i++)
    {
        printf("ingrese el elemento %d:\n", i+1);
        printf("> ");
        scanf("%d", &a[i]);
    }
    suma_array(a, N, suma);
    return 0;
}

int suma_array(int a[], int n, int suma)
{
    if (n == 0)
    {
        printf("la suma de los elementos del array es: %d", suma);
    }
    else
    {
        suma_array(a, n-1, suma + a[n-1]);
    }
}
/*
Realizar un programa que permita obtener los enteros primos comprendidos entre 1 y 500.
Implementar una función para determinar si un número es o no primo.
*/

#include <stdio.h>
#define N 500

int primo(int);
int esprimo(int);
int mostrar(int, int);

int main()
{
    printf("Estos son los numeros primos del 1 al 500\n");
    primo(N);
    return 0;
}

int primo(int Max)
{
    int i;
    for (i = 1; i < Max; i++)
    {
        esprimo(i);
    }
}

int esprimo(int num)
{
    int j, contador = 0;
    for (j = 1; j < num; j++)
    {
        if (num % j == 0)
        {
            contador++;
        }
    }
    mostrar(num, contador);
}

int mostrar(int num, int contador)
{
    if (contador < 3)
    {
        printf("%d\n", num);
    }
}
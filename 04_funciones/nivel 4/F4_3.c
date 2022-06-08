/*
Implementar el algoritmo de Euclides para determinar el MCD entre dos enteros.
*/

#include <stdio.h>
int euclides(int, int);

int main()
{
    int a, b;
    printf("ingrese dos numeros y encontrar el maximo comun divisor\n");
    printf("ingrese el primer numero:\n");
    printf("> ");
    scanf("%d", &a);
    printf("ingrese el segundo numero:\n");
    printf("> ");
    scanf("%d", &b);
    euclides(a, b);
    return 0;
}

int euclides (int a, int b)
{
    if (a%b == 0)
    {
        printf("el maximo comun divisor es: %d", b);
    }
    else
    {
        euclides(b, a%b);
    }
}
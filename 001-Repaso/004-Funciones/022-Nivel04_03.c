// Implementar el algoritmo de Euclides para determinar el MCD entre dos enteros.

#include <stdio.h>

int ingresar();
int mcd(int, int);

int main(int argc, char const *argv[])
{
    int valorA, valorB, divisor;
    printf("Algoritmo de Euclides:\n");
    do
    {
        valorA = ingresar();
        valorB = ingresar();
        if (valorA < valorB)
        {
            printf("El primer valor %d tiene que ser mayor que el segundo %d\n", valorA, valorB);
        }
    } while (valorA < valorB);

    divisor = mcd(valorA, valorB);
    printf("El mayor divisor de %d y %d es: %d\n", valorA, valorB, divisor);
    return 0;
}

int ingresar()
{
    int a;
    printf("Ingresa el valor:\n");
    printf("> ");
    scanf("%d", &a);
    return a;
}

int mcd(int a, int b){
    if (a % b == 0)
    {
        return b;
    }
    else
    {
        mcd(b, a % b);
    }
}

/*
El máximo entre dos enteros
*/

#include <stdio.h>

#define MAX(X, Y) ((X) > (Y) ? (X) : (Y))

int main()
{
    int num1, num2, a;

    printf("Te dire cual es el mayor numero entre dos enteros: \n");
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    if (num1 == num2)
    {
        printf("Los numeros son iguales.\n");
        return 0;
    }

    a = MAX(num1, num2);

    printf("El mayor numero entre %d y %d es %d\n", num1, num2, a);

    return 0;
}
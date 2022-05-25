/*
Dado un entero, crear una función que muestre por pantalla todos sus divisores.
*/

#include <stdio.h>
#define TRUE 1
#define FALSE 0

int divisores(int, int);

int main()
{
    int numero, i, divi, p = 1;
    printf("Ingrese un numero entero y de mostrare todos sus divisores\n");
    printf("> ");
    scanf("%d", &numero);
    for (i = 1; i < numero; i++)
    {
        divi = divisores(numero, i);
        if (divi == TRUE)
        {
            printf("%d) %d\n", p, i);
            p++;
        }
    }
    return 0;
}

int divisores(int numero, int i)
{
    if (numero % i == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}


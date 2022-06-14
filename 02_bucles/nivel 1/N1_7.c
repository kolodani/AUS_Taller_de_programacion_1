/*
Pida un número entero entre 1 y 15 (controlar esto) y muestre el mismo número de asteriscos por pantalla.
*/

#include <stdio.h>

int main()
{
    int numero, i;
    printf("Ingrese un numero entero entre 1 y 15: \n");
    printf("-> ");
    scanf("%d", &numero);
    
    if (numero >= 1 && numero <= 15)
    {
        for (i = 1; i <= numero; i++)
        {
            printf("* ");
        }
    }
    else
    {
        printf("El numero no esta entre 1 y 15");
        return 0;
    }
    return 0;
}

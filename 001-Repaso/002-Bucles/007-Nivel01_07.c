// Pida un número entero entre 1 y 15 (controlar esto) y muestre el mismo número de asteriscos por pantalla.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero;

    printf("Ingrese un numero entero entre 1 y 15, veras esa cantidad de asteriscos\n");
    printf("> ");
    scanf("%d", &numero);

    if (numero >= 1 && numero <= 15)
    {
        for (int i = 1; i <= numero; i++)
        {
            printf("* ");
        }
    }
    else
    {
        printf("El numero %d no esta entre 1 y 15", numero);
    }

    return 0;
}

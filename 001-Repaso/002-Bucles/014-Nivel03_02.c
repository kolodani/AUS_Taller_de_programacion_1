// Calcule el factorial de un número entero positvo

#include <stdio.h>

int main(int argc, char *argv[])
{
    int numero;
    int factorial = 1;

    printf("Ingrese un numero entero positivo y te dare su factorial!!!\n");
    printf("> ");
    scanf("%d", &numero);

    if (numero > 0)
    {
        for (int i = numero; i >= 2; i--)
        {
            factorial = factorial * i;
        }
        printf("EL factorial de %d es: %d\n", numero, factorial);
    }
    else
    {
        printf("El entero tiene que ser mayor a cero, sino no se puede hacer el factorial\n");
    }

    return 0;
}

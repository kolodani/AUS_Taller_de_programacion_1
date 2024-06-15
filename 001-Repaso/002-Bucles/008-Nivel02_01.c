// Muestre los divisores de un número

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero;

    printf("Ingrese un numero entero y le dare todos sus divisores\n");
    printf("> ");
    scanf("%d", &numero);

    if (numero > 0)
    {
        printf("Divisores: ");
        for (int i = 1; i <= numero; i++)
        {
            if (numero % i == 0)
            {
                printf("%d ", i);
            }
        }
    }
    else
    {
        printf("El numero ingresado tiene que ser mayor a cero\n");
    }

    return 0;
}

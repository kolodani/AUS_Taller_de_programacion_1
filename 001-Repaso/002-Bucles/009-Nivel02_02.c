// Pida un número por teclado y decir si es un número primo o no. Controlar que el usuario ingrese un número mayor a 0.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int primo, cantidad = 0;
    printf("Ingrese un numero entero y te dire si es primo\n");
    printf("> ");
    scanf("%d", &primo);

    if (primo < 0)
    {
        printf("El numero debe ser mayor a cero");
    }
    else
    {
        for (int i = 1; i <= primo; i++)
        {
            if (primo % i == 0)
            {
                cantidad++;
            }
        }
    }
    if (cantidad == 2)
    {
        printf("El numero %d SI es Primo", primo);
    }
    if (cantidad > 2)
    {
        printf("El numero %d NO es Primo", primo);
    }

    return 0;
}

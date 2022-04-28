#include <stdio.h>

int main()
{
    int numero, i;
    int contador = 0;
    printf("ingrese un numero entero positivo para saber si es primo o no: \n");
    printf("-> ");
    scanf("%d", &numero);
    
    if (numero > 0)
    {
        for (i = 1; i <= numero; i++)
        {
            if (numero % i == 0)
            {
                contador++;
            }
        }
        if (contador == 2)
        {
            printf("El numero %d es primo", numero);
            return 0;
        }
        else
        {
            printf("El numero %d no es primo", numero);
            return 0;
        }
    }
    else
    {
        printf("El numero ingresado no es positivo");
        return 0;
    }
    
    
    return 0;
}

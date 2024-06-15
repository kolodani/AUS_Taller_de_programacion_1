// Calcule el promedio de N números, se dejarán de solicitar números hasta que se introduzca el cero.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero = 1;
    int cantidad = 0;
    int total = 0;

    printf("Ingresa varios numeros y te dire el promedio, para finalizar ingrese el numero 0\n");
    while (numero != 0)
    {
        printf("Numero %d) ", cantidad + 1);
        scanf("%d", &numero);
        total = total + numero;
        cantidad++;
    }
    numero = total / (cantidad - 1);
    printf("El promedio es : %d", numero);

    return 0;
}

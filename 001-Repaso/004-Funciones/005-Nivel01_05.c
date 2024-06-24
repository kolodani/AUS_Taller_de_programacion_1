// Dado un entero, crear una función que muestre por pantalla todos sus divisores.

#include <stdio.h>

#define POSITIVO 1
#define NEGATIVO -1
#define CERO 0

int signo(int);
void divisores(int, int);

int main(int argc, char *argv[])
{
    int numero, signoNumero;

    printf("Ingrese un entero y te mostrare todos sus divisores\n");
    printf("> ");
    scanf("%d", &numero);

    signoNumero = signo(numero);

    switch (signoNumero)
    {
    case CERO:
        printf("El cero no tiene divisores.\n");
        break;
    case POSITIVO:
        printf("Los divisores de %d son:\n", numero);
        for (int i = 1; i <= numero; i++)
        {
            divisores(numero, i);
        }
        break;
    case NEGATIVO:
        printf("Los divisores de %d son:\n", numero);
        for (int i = -1; i >= numero; i--)
        {
            divisores(numero, i);
        }
        break;
    default:
        printf("Error, no entro en ningun caso.\n");
        break;
    }

    return 0;
}

int signo(int numero)
{
    if (numero > 0)
    {
        return POSITIVO;
    }
    else if (numero < 0)
    {
        return NEGATIVO;
    }
    else
    {
        return CERO;
    }
}

void divisores(int numero, int divi)
{
    if (numero % divi == 0)
    {
        printf("%d ", divi);
    }
}

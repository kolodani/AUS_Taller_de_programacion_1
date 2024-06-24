// Implementar una función que dado un entero determine si es capicúa,
// es decir que el valor del mismo sea el mismo si de lee del derecho o el revés.

#include <stdio.h>

#define FALSE 0
#define TRUE 1

int capicua(int);

int main(int argc, char *argv[])
{
    int numero, capi;

    printf("Ingrese un numero y te dire si es capicua:\n");
    printf("> ");
    scanf("%d", &numero);

    capi = capicua(numero);

    if (capi)
    {
        printf("El numero %d es capicua\n", numero);
    }
    else
    {
        printf("El numero no %d es capicua\n", numero);
    }

    return 0;
}

int capicua(int numero)
{
    int ene = 0;
    int copia = numero;
    int respaldo = numero;
    int resto;
    int noCapicua = 0;

    while (copia != 0)
    {
        copia = copia / 10;
        ene++;
    }
    int invertido[ene];
    int normal[ene];

    for (int i = 0; i < ene; i++)
    {
        resto = respaldo % 10;
        invertido[i] = resto;
        normal[ene - (i + 1)] = resto;
        respaldo = respaldo / 10;
    }

    for (int i = 0; i < ene; i++)
    {
        if (normal[i] != invertido[i])
        {
            noCapicua++;
        }
    }

    if (noCapicua == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

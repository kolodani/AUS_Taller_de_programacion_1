/*
Implementar funciones que permitan pasar pesos argentinos a dólares estadounidenses y a pesos chilenos.
*/

#include <stdio.h>

int elegir_moneda();
float ingresarvalor();
float convertirdolar(float);
float convertirchileno(float);

int main()
{
    int opcion;
    float valor;
    printf("Convetir pesos argentinos a otras monedas\n");
    opcion = elegir_moneda();
    if (opcion == 1)
    {
        valor = ingresarvalor();
        convertirdolar(valor);
    }
    else if (opcion == 2)
    {
        valor = ingresarvalor();
        convertirchileno(valor);
    }
    else
    {
        printf("Opcion no valida\n");
    }
    return 0;
}

int elegir_moneda()
{
    int opcion;
    printf("Ingresa 1) Dolar estadounidense\n");
    printf("Ingresa 2) Peso chileno\n");
    printf("Ingrese una opcion:\n");
    printf("> ");
    scanf("%d", &opcion);
    return opcion;
}

float ingresarvalor()
{
    float valor;
    printf("Ingrese el valor a convertir\n");
    printf("> ");
    scanf("%f", &valor);
    return valor;
}

float convertirdolar(float valor)
{
    float dolar;
    dolar = valor * 0.0084;
    printf("Sus %f pesos son un total de: %f dolares estadounidenses\n",valor, dolar);
}

float convertirchileno(float valor)
{
    float chileno;
    chileno = valor * 6.99;
    printf("Sus %f pesos son un total de: %f pesos chilenos\n", valor, chileno);
}
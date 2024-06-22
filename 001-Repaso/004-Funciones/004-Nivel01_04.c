// Implementar funciones que permitan pasar pesos argentinos a dólares estadounidenses y a pesos chilenos.

#include <stdio.h>

#define FALSE 0
#define TRUE 1

float validador();
float aDolares(float);
float aPesos(float);

int main(int argc, char const *argv[])
{
    int respuesta;
    float cantidad, conversion;

    printf("Convertidos de monedas:\n");
    printf("1) Pesos argentinos a Dolares estadounidenses.\n");
    printf("2) Pesos argentinos a Pesos Chilenos.\n");
    printf("> ");
    scanf("%d", &respuesta);

    if (respuesta == 1)
    {
        cantidad = validador();
        conversion = aDolares(cantidad);
        printf("Convertiste %f pesos argentinos a %f dolares estadounidenses.\n", cantidad, conversion);
    }
    else if (respuesta == 2)
    {
        cantidad = validador();
        conversion = aPesos(cantidad);
        printf("Convertiste %f pesos argentinos a %f pesos chilenos.\n", cantidad, conversion);
    }
    else
    {
        printf("Opcion incorrecta, fin del programa.\n");
    }

    return 0;
}

float validador()
{
    float valor;
    int bucle;
    do
    {
        bucle = FALSE;
        printf("Ingrese valor positivo en pesos a convertir:\n");
        printf("> ");
        scanf("%f", &valor);
        if (valor < 0)
        {
            bucle = TRUE;
            printf("Ingreso un valor negativo: %f\n", valor);
        }
    } while (bucle);
    return valor;
}

float aDolares(float pesos)
{
    float dolar = pesos * 0.0011;
    return dolar;
}

float aPesos(float argentino)
{
    float chileno = argentino * 1.04;
    return chileno;
}

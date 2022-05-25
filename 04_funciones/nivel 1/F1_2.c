/*
Reciba una temperatura expresada en grados Celsius y conviértala en Farenheit mediante una función.
Crear además la función que realice la acción inversa.
*/

#include <stdio.h>
int opciones();
float convertirCelsius(float);
float convertirFarenheit(float);

int main()
{
    int opc;
    float grados;
    printf("convertidor de temperaturas\n");
    opc = opciones();
    
    if (opc == 1)
    {
        printf("Ingrese los grados Celsius a convertir:\n");
        printf("> ");
        scanf("%f", &grados);
        convertirCelsius(grados);
    }
    else if (opc == 2)
    {
        printf("Ingrese los grados Farenheit a convertir:\n");
        printf("> ");
        scanf("%f", &grados);
        convertirFarenheit(grados);
    }
    return 0;
}

int opciones()
{
    int opcion;
    printf("Ingrese de 1 para convertir de Celsius a Farenheit\n");
    printf("Ingrese de 2 para convertir de Farenheit a Celsius\n");
    printf("> ");
    scanf("%d", &opcion);
    return opcion;
}

float convertirCelsius(float grados)
{
    printf("%f grados Celsius equivalen a %f grados Farenheit\n", grados, (grados * (9.0/5.0)) + 32.0);
}

float convertirFarenheit(float grados)
{
    printf("%f grados Farenheit equivalen a %f grados Celsius\n", grados, (grados - 32.0) * (5.0/9.0));
}
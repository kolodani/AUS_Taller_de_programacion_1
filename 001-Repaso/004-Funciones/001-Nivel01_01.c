// Crear un programa que permita pasar una cantidad de días y horas (especificados con enteros positivos, validar esto) a minutos.

#include <stdio.h>
#include <stdbool.h>

bool validador(int);
int convertidor(int, int);

int main(int argc, char const *argv[])
{
    int dias, horas;

    printf("Convertidor de dias y horas en minutos.\n");

    do
    {
        printf("Ingrese un entero positivo como cantidad de dias:\n");
        printf("> ");
        scanf("%d", &dias);
    } while (validador(dias));

    do
    {
        printf("Ingrese un entero positivo como cantidad de horas:\n");
        printf("> ");
        scanf("%d", &horas);
    } while (validador(horas));

    printf("El numero de dias: %d, y de horas: %d es igual a %d minutos", dias, horas, convertidor(dias, horas));

    return 0;
}

bool validador(int a)
{
    if (a >= 0)
    {
        return false;
    }
    else
    {
        printf("El valor tiene que ser positivo y no lo es: %d\n", a);
        return true;
    }
}

int convertidor(int dias, int horas)
{
    int minutos = (dias * 24 * 60) + (horas * 60);
    return minutos;
}
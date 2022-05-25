/* 
Crear un programa que permita pasar una cantidad de días y horas
(especificados con enteros positivos, validar esto) a minutos.
*/

#include <stdio.h>
#define TRUE 1
#define FALSE 0
int validar(int);
int convertirminutos(int, int);

int main()
{
    int dias, horas;
    
    printf("Ingrese la cantidad de dias y horas para ser convertidos a minutos\n");
    do
    {
        printf("Primero ingrese los Dias:\n");
        printf("> ");
        scanf("%d", &dias);
    } while (validar(dias) == FALSE);
    do
    {
        printf("Ahora ingrese las horas:\n");
        printf("> ");
        scanf("%d", &horas);
    } while (validar(horas) == FALSE);
    
    convertirminutos(dias, horas);
    
    return 0;
}

int validar(int numero)
{
    if (numero < 0)
    {
        printf("ingrese un numero entero positivo\n");
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int convertirminutos(int dia, int hora)
{
    int minutos = 0;
    minutos = (dia * 24 * 60) + (hora * 60);
    printf("%d dias y %d horas equivalen a %d minutos\n", dia, hora, minutos);
}




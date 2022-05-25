/*
Crear una función que recibe un entero positivo menor o igual a a 10 e
imprima por pantalla una pirámide similar a esta.Ejemplo para 5. 
Tip : tener en cuenta los espacios y antes de programar pensar en el algoritmo.
*/

#include <stdio.h>
int piramide(int);

int main()
{
    int num;
    printf("Ingresa un numero menor o igual a 10 y te mostrare una piramide\n");
    printf("Ingresa un numero:\n");
    do
    {
        printf("> ");
        scanf("%d", &num);
        if (num > 10 || num < 0)
        {
            printf("Ingresa un numero menor o igual a 10, y mayor a cero:\n");
        }
        
    } while (num > 10 || num < 0);
    piramide(num);
    return 0;
}

int piramide(int num)
{
    int i, j, k;
    int aux1 = 1;
    do
    {
        for (i = 0; i < (num); i++)
        {
            printf(" ");
        }
        for (j = 0; j < aux1; j++)
        {
            printf("%d", j + 1);
        }
        for (k = 1; k < aux1; k++)
        {
            printf("%d", aux1 - k);
        }
        for (i = 0; i < (num); i++)
        {
            printf(" ");
        }
        printf("\n");
        num--;
        aux1++;
    } while (num > 0);
}

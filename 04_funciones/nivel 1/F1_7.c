/*
Implementar una función que dado un entero determine si es capicúa,
es decir que el valor del mismo sea el mismo si de lee del derecho o el revés
*/

#include <stdio.h>

int capicua(int);

int main()
{
    int num;
    printf("Ingresa un numero y yo te dire si es capicua o no\n");
    printf("Ingresa un numero:\n");
    printf("> ");
    scanf("%d", &num);
    capicua(num);
    return 0;
}

int capicua(int num)
{
    int original = num, copia = num;
    int resto;
    int contador = 0, total = 0 , i, nocapi = 0, con = 0;
    while (copia != 0)
    {
        copia = copia / 10;
        con++;
    }
    int A[con];
    while (num > 0)
    {
        resto = num % 10;
        A[contador] = resto;
        contador++;
        total = total * 10 + resto;
        num = num / 10;
    }
    for (i = 0; i < (contador/2); i++)
    {
        if (A[i] != A[contador - i - 1])
        {
            printf("El numero %d no es capicua\n", original);
            nocapi++;
            break;
        }
    }
    if (nocapi == 0)
    {
        printf("El numero %d es capicua\n", original);
    }
}

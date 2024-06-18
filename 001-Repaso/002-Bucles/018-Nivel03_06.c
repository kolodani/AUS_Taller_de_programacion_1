// Empleando bucles for anidados intente generar las siguientes salidas por pantalla.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Impresion de patrones:\n");
    printf("a)\n");
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("b)\n");
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            printf("+");
        }
        printf("\n");
    }
    printf("c)\n");
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("$");
        }
        printf("\n");
    }
    printf("d)\n");
    for (int i = 1; i <= 28; i++)
    {
        if (i % 2 == 0)
        {
            printf(".");
        }
        else
        {
            printf("@");
        }
        if (i % 7 == 0)
        {
            printf("\n");
        }
    }
    return 0;
}

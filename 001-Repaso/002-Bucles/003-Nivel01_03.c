// Muestre la suma de todos los números impares que van del 1 al 100.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int suma = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            suma += i;
        }
    }

    printf("La suma de todos los impares del 1 al 100 es: %d", suma);

    return 0;
}

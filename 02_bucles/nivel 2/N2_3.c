#include <stdio.h>

int main()
{
    int i;
    int suma = 0;
    for (i = 1; i <= 100; i++)
    {
        suma = suma + (i * i);
    }
    printf("La suma de los cuadrados de los numeros del 1 al 100 es: %d", suma);
    return 0;
}

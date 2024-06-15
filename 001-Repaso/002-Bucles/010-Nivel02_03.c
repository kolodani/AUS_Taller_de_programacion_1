// Calcule la suma de los cuadrados de los 100 primeros números enteros.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int total = 0;
    for (int i = 1; i <= 100; i++)
    {
        total = total + (i * i);
    }
    printf("La suma de los cuadrados de los primeros 100 numeros enteros:\n");
    printf("%d", total);
    return 0;
}

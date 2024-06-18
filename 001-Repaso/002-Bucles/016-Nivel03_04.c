// Muestre los 25 primeros números de la sucesión de Fibonacci.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int primero = 0;
    int segundo = 1;
    int suma;
    printf("Los primeros 25 numeros de la sucesion de Fibonacci\n");
    for (int i = 1; i <= 25; i++)
    {
        printf("%d, ", primero);
        suma = primero + segundo;
        primero = segundo;
        segundo = suma;
    }
    return 0;
}

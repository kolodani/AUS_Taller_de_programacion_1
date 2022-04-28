#include <stdio.h>

int main()
{
    int i;
    int suma = 0;
    
    for (i = 1; i < 101; i++)
    {
        if (i % 2 != 0)
        {
            suma = suma + i;
        }
    }
    
    printf("La suma de los numeros impares entre 1 y 100 es: %d\n", suma);
    
    return 0;
}

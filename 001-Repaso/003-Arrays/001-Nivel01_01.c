// Declare un array de 10 enteros y permita que el usuario ingrese valores comprendidos entre el -10 y el 10 (asegurar esto) y luego lo muestre por pantalla.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int enteros[10];
    printf("Ingrese 10 valores enteros entre -10 y 10:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Valor %d: ", i + 1);
        scanf("%d", &enteros[i]);
        if (enteros[i] < -10 || enteros[i] > 10)
        {
            printf("Ingrese valores entre -10 y 10, vuelva a intentarlo:\n");
            i--;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", enteros[i]);
    }
    return 0;
}

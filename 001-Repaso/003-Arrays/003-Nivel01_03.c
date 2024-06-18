// Declare un array de 10 enteros, permita la carga manual y luego determine lo siguiente:
// - cuantos elementos son positivos y pares
// - cuantos elementos son positivos e impares
// - cuantos elementos son negativos y pares
// - cuantos elementos son negativos e impares

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arreglo[10];
    int posipar = 0;
    int posiimp = 0;
    int negapar = 0;
    int negaimp = 0;
    printf("Ingrese 10 enteros al arreglo:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese el valor numero %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }
    printf("Su arreglo de 10 enteros:\n");
    for (int i = 0; i < 10; i++)
    {
        if (arreglo[i] > 0)
        {
            if (arreglo[i] % 2 == 0)
            {
                posipar++;
            }
            else
            {
                posiimp++;
            }
        }
        else if (arreglo[i] < 0)
        {
            if (arreglo[i] % 2 == 0)
            {
                negapar++;
            }
            else
            {
                negaimp++;
            }
        }
        printf("%d ", arreglo[i]);
    }
    printf("\n");
    printf("Elementos son positivos y pares: %d\n", posipar);
    printf("Elementos son positivos y impares: %d\n", posiimp);
    printf("Elementos son negativos y pares: %d\n", negapar);
    printf("Elementos son negativos y impares: %d\n", negaimp);
    return 0;
}

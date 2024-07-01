// Dado un array de N enteros, crear una función para invertirlo y posteriormente mostrarlo por pantalla.

#include <stdio.h>

void invertido(int[], int);

int main(int argc, char *argv[])
{
    int tama;

    printf("Ingrese un tamaño para el arreglo:\n");
    printf("> ");
    scanf("%d", &tama);
    int arreglo[tama];

    printf("Ingrese los valores del arreglo:\n");
    for (int i = 0; i < tama; i++)
    {
        printf("valor %d:\n", i + 1);
        printf("> ");
        scanf("%d", &arreglo[i]);
    }

    invertido(arreglo, tama);
    return 0;
}

void invertido(int arreglo[], int tama)
{
    printf("El arreglo invertido:\n");
    for (int i = (tama - 1); i >= 0; i--)
    {
        printf("%d ", arreglo[i]);
    }
}

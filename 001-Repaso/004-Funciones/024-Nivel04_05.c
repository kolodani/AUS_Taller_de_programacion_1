// Crear una función recursiva para invertir un array.

#include <stdio.h>

#define N 0

int ingresar();
void ingreArreglo(int[], int);
void imprimir(int[], int);
void invertir(int[], int, int);

int main(int argc, char const *argv[])
{
    int tamano;

    printf("Inventidor de un arreglo:\n");
    printf("Ingrese el tamaño del arreglo:\n");
    tamano = ingresar();

    int arreglo[tamano];
    printf("Ingresa los valores del arreglo:\n");
    ingreArreglo(arreglo, tamano);

    printf("El arreglo:\n");
    imprimir(arreglo, tamano);

    invertir(arreglo, tamano - 1, N);

    printf("El arreglo invertido:\n");
    imprimir(arreglo, tamano);

    return 0;
}

int ingresar()
{
    int a;
    do
    {
        printf("> ");
        scanf("%d", &a);
        if (a < 0)
        {
            printf("El valor tiene que ser mayor que cero.\n");
        }
    } while (a < 0);
    return a;
}

void ingreArreglo(int arreglo[], int tama)
{
    for (int i = 0; i < tama; i++)
    {
        printf("Valor %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }
}

void imprimir(int arreglo[], int tamano)
{
    for (int i = 0; i < tamano; i++)
    {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
}

void invertir(int arreglo[], int tama, int i)
{
    int aux;
    if (i > tama)
    {
        printf("Arreglo invertido con exito!.\n");
    }
    else
    {
        aux = arreglo[i];
        arreglo[i] = arreglo[tama];
        arreglo[tama] = aux;
        invertir(arreglo, tama - 1, i + 1);
    }
}

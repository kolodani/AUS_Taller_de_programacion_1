// Crear una función recursiva para sumar los elementos de un array.

#include <stdio.h>

#define N 0

int ingresar();
void ingreArreglo(int[], int);
int suma(int[], int, int);

int main(int argc, char const *argv[])
{
    int tamano, resultado;

    printf("Sumador de valores de un arreglo:\n");
    printf("Ingrese el tamaño del arreglo:\n");
    tamano = ingresar();

    int arreglo[tamano];
    printf("Ingresa los valores del arreglo:\n");
    ingreArreglo(arreglo, tamano);

    resultado = suma(arreglo, tamano, N);
    printf("La suma del arreglo es: %d", resultado);

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

int suma(int arreglo[], int tama, int n)
{
    int sumatoria = 0;
    if (n == tama)
    {
        return sumatoria;
    }
    else
    {
        sumatoria = sumatoria + arreglo[n] + suma(arreglo, tama, n + 1);
    }
}

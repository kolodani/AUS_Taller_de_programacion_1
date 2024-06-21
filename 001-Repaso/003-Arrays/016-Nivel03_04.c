// Declarar un array A de 15 elementos enteros.
// Solicitar al usuario el ingreso de un valor por vez e ir colocando dicho entero en el array,
// donde cada elemento previo existente en el array A deba ser menor o igual
// y cada elemento posterior deba ser mayor al que el usuario ingresó.
// En cada paso mostrar el estado del array.
// Al finalizar deberá quedar el array ordenado de forma ascendente.

#include <stdio.h>

#define N 15

int main(int argc, char const *argv[])
{
    int A[N];
    printf("Ingrese valores enteros al arreglo de forma ascendente:\n");
    for (int i = 0; i < N; i++)
    {
        printf("Ingrese el valor A[%d]: ", i + 1);
        scanf("%d", &A[i]);
        if (i != 0 && A[i] < A[i - 1])
        {
            printf("Ingresa un valor mayor o igual a %d.\n", A[i - 1]);
            i--;
        }
        else
        {
            printf("Arreglo A:\n");
            printf("[ ");
            for (int j = 0; j <= i; j++)
            {
                printf("%d ", A[j]);
            }
            printf("]\n");
        }
    }

    return 0;
}

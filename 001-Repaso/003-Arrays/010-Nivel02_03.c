// Dado un array A de 10 ints cagado aleatoriamente y con valores comprendidos entre 0 y 100, determinar si se tienen más elementos pares que impares o bien misma cantidad. Rehaga el ejercicio utilizando un único bucle for si empleo más de uno.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(int argc, char const *argv[])
{
    int A[N];
    int par = 0, impar = 0;

    srand(time(NULL));

    printf("Arreglo A: ");
    for (int i = 0; i < N; i++)
    {
        A[i] = rand() % 101;
        if (A[i] % 2 == 0)
        {
            par++;
        }
        else if (A[i] % 2 != 0)
        {
            impar++;
        }
        printf("%d ", A[i]);
    }
    printf("\n");

    if (par > impar)
    {
        printf("En el arreglo hay mas pares: %d, que impares: %d.", par, impar);
    }
    else if (impar > par)
    {
        printf("En el arreglo hay mas impares: %d, que pares: %d.", impar, par);
    }
    else
    {
        printf("Hay la misma cantidad de pares: %d, e impares: %d", par, impar);
    }

    return 0;
}

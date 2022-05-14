/*
Dado un array de 10 floats, mostrar por pantalla cuales elementos superan al promedio.
*/

#include <stdio.h>
#define N 10

int main()
{
    float A[N];
    int i;
    float promedio = 0;
    
    printf("Ingrese valores flotantes para el array A: \n");
    for(i = 0; i < N; i++)
    {
        printf("Ingrese el valor de A[%d]: \n", i + 1);
        printf("> ");
        scanf("%f", &A[i]);
    }
    
    for (i = 0; i < N; i++)
    {
        promedio += A[i];
    }
    
    for (i = 0; i < N; i++)
    {
        if (A[i] > promedio / N)
        {
            printf("El valor A[%d] = %f supera el promedio %f\n", i + 1, A[i], promedio / N);
        }
    }
    
    return 0;
}

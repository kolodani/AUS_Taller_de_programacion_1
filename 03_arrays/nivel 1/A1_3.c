/*
Declare un array de 10 enteros, permita la carga manual y luego determine lo siguiente:
- cuantos elementos son positivos y pares
- cuantos elementos son positivos e impares
- cuantos elementos son negativos y pares
- cuantos elementos son negativos e impares
*/
#include <stdio.h>

int main()
{
    int i;
    int A[10];
    int positivo_par = 0, positivo_impar = 0, negativo_par = 0, negativo_impar = 0;
    
    printf("ingrese los 10 valores enteros de A:\n");
    for (i = 0; i < 10; i++)
    {
        printf("> ");
        scanf("%d", &A[i]);
    }
    
    for (i = 0; i < 10; i++)
    {
        if (A[i] % 2 == 0 && A[i] > 0)
        {
            positivo_par++;
        }
        else if (A[i] % 2 == 0 && A[i] < 0)
        {
            negativo_par++;
        }
        else if (A[i] % 2 != 0 && A[i] > 0)
        {
            positivo_impar++;
        }
        else if (A[i] % 2 != 0 && A[i] < 0)
        {
            negativo_impar++;
        }
    }
    printf("\n");
    printf("Positivos pares: %d\n", positivo_par);
    printf("Positivos impares: %d\n", positivo_impar);
    printf("Negativos pares: %d\n", negativo_par);
    printf("Negativos impares: %d\n", negativo_impar);
    
    return 0;
}

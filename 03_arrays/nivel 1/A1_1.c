/*
Declare un array de 10 enteros y permita que el usuario ingrese valores comprendidos entre el -10 y el 10 (asegurar esto) y luego lo
muestre por pantalla.
*/
#include <stdio.h>

int main()
{
    int A[10];
    int i;
    printf("ingrese valores enteros entre -10 y 10\n");
    
    for (i = 0; i < 10; i++)
    {
        printf("> ");
        scanf("%d", &A[i]);
        if (A[i] < -10 || A[i] > 10)
        {
            printf("REITERAMOS: ingrese valores enteros entre -10 y 10\n");
            i--;
        }
    }
    
    for (i = 0; i < 10; i++)
    {
        printf("%d ", A[i]);
    }
    
    return 0;
}

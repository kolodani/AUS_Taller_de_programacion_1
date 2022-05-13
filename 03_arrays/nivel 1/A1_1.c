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

/*
Empleando bucles for anidados intente generar las siguientes salidas por pantalla.
*/

#include <stdio.h>

int main()
{
    int i, j;
    int M = 1;
    int N = 5;
    int K = 1;
    // ejercicio a
    printf("a)\n");
    
    while (M < 6)
    {
        for (i = 0; i < M; i++)
        {
            printf("*");
        }
        M++;
        printf("\n");
    }
    // ejercicio b
    printf("b)\n");
    
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("+");
        }
        printf("\n");
    }
    // ejercicio c
    printf("c)\n");
    
    while (N > 0)
    {
        for (i = 0; i < N; i++)
        {
            printf("$");
        }
        N--;
        printf("\n");
    }
    // ejercicio d
    printf("d)\n");
    
    while (K <= 28)
    {
        if (K % 2 == 0)
        {
            printf(". ");
        }
        else
        {
            printf("@ ");
        }
        if (K % 7 == 0)
        {
            printf("\n");
        }
        K++;
    }
    return 0;
}

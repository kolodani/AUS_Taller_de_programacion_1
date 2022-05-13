#include <stdio.h>

int main()
{
    int i, j;
    int M = 1;
    int N = 5;
    int K = 1;
    
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
    
    printf("b)\n");
    
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("+");
        }
        printf("\n");
    }
    
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

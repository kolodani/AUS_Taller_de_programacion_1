#include <stdio.h>
#define N 10

int main()
{
    int A[N] = {45, 11, -5, 80, 6, 99, 105, -200, 22, 1};
    int r;
    int i;
    int temp;
    int copia_r;
    
    printf("Ingrese la rotacion deseada: \n");
    do
    {
        printf("> ");
        scanf("%d", &r);
    } while (r < -(N-1) ||r > (N-1));
    
    copia_r = r;
    printf("Array original: \n");
    printf("{ ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    printf("}\n");
    
    if (r > 0)
    {
        while (r > 0)
        {
            int temp = A[N-1];
            for (i = N-2; i >= 0; i--)
            {
                A[i+1] = A[i];
            }
            A[0] = temp;
            r--;
        }
    }
    else if (r < 0)
    {
        while (r < 0)
        {
            int temp = A[0];
            for (i = 0; i < N-1; i++)
            {
                A[i] = A[i+1];
            }
            A[N-1] = temp;
            r++;
        }
    }
    else
    {
        printf("No quiere rotarlo???\n");
    }
    
    printf("Array rotado de %d rotaciones: \n", copia_r);
    printf("{ ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    printf("}\n");
    
    return 0;
}

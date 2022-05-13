#include <stdio.h>

#define N 5
#define ROWS 5
#define COLS 4


int main()
{
    int A[N];
    int M[ROWS][COLS];
    int i, j;
    
    for (i = 0; i < N; i++)
    {
        printf("Posicion [%d]: ", i);
        scanf("%d", &A[i]);
    }
    
    printf("contenido del array:\n");
    
    for (i = 0; i < N; i++)
    {
        printf("%d\n", A[i]);
    }
    printf("\n");
    
    return 0;
}

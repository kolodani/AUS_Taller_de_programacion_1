#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
    // Declaro variables
    int i;
    int A[N];
    int pivote;
    srand (time(NULL));
    // Declaro array
    printf("Array original:\n");
    printf("{ ");
    for (i = 0; i < N; i++)
    {
        A[i] = rand();
        printf("%d ", A[i]);
    }
    printf("}\n");
    // Invierto array
    for (i = 0; i < N/2; i++)
    {
        pivote = A[i];
        A[i] = A[N-1-i];
        A[N-1-i] = pivote;
    }
    // Imprimo array
    printf("El array invertido es: \n");
    printf("{ ");
    for (i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    printf("}\n");
    return 0;
}

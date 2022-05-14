#include <stdio.h>
#define N 15

int main()
{
    float A[N];
    int i;
    float f;
    float P[N];
    
    printf("Ingrese valores flotantes para el array A: \n");
    for(i = 0; i < N; i++)
    {
        printf("Ingrese el valor de A[%d]: \n", i + 1);
        printf("> ");
        scanf("%f", &A[i]);
    }
    
    printf("Ingrese un valor flotante f en el rango (0, 100]: \n");
    printf("> ");
    scanf("%f", &f);
    printf("\n");
    
    printf("El array P es: \n");
    for(i = 0; i < N; i++)
    {
        P[i] = A[i] * f;
        printf("P[%d] = %f \n", i + 1, P[i]);
    }
    
    return 0;
}

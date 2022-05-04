#include <stdio.h>
#define N 10

int main()
{
    int a [N];
    int i, aux;
    
    for (i = 0; i < N; i++)
    {
        printf("ingrese posicion %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("Array ingresado: \n");

    for (i = 0; i < N ; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    for (i = 0; i < N/2; i++)
    {
        aux = a[i];
        a[i] = a[N-(i+1)];
        a[N-(i+1)] = aux;
    }      
    printf("\n");
    printf("Nuevo Array: \n");
    for (i = 0; i < N ; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}
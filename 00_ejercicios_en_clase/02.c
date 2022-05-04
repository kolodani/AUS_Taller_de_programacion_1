#include <stdio.h>
#define N 10

int main()
{
    int a[N];
    int i;

    for (i = 0; i < N; i++)
    {
        printf("ingrese posicion %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("Array ingresado: \n");

    for (i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    for (i = 0; i < N / 2; i++)
    {
        if (a[i] != a[N - (i + 1)])
        {
            printf("No es palindromo!");
            break;
        }
    }
    if (i == N / 2)
    {
        printf("Es palindromo!!!");
    }
    return 0;
}
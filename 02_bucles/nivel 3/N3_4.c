#include <stdio.h>

int main()
{
    int i, fibo = 0, fibo2 = 1, fibo3;
    printf("Los primeros 25 numeros de la serie de fibonacci:\n");
    printf("1) 1\n");
    for (i = 2; i <= 25; i++)
    {
        fibo3 = fibo + fibo2;
        fibo = fibo2;
        fibo2 = fibo3;
        printf ("%d) %d\n",i, fibo3);
    }
    return 0;
}

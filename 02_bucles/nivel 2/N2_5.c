#include <stdio.h>

int main()
{
    int n, p, m, i;
    
    do
    {
        printf("Ingrese tres numeros enteros positivos: \n");
        printf("-> ");
        scanf("%d", &n);
        printf("-> ");
        scanf("%d", &p);
        printf("-> ");
        scanf("%d", &m);
        
        if (n > m){
            printf("el ultimo numero ingresado tiene que ser el mayor\n");
        }
    } while (n > m);
    
    for (i = 1; i < m; i++)
    {
        if (m < n + i * p)
        {
            break;
        }
        printf("%d\n", n + i * p);
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int numero, i;
    int j = 1;
    printf("Ingrese un numero entero y te dare todos sus divisores: \n");
    printf("-> ");
    scanf("%d", &numero);
    
    for (i = 1; i <= numero; i++)
    {
        if(numero % i == 0)
        {
            printf("%d) %d \n",j, i);
            j++;
        }
    }
    return 0;
}

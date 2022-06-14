/*
Muestre las tablas de multiplicar del 1 al 10.
*/
#include <stdio.h>

int main()
{
    int i, j;
    
    printf("La tabla de multiplicar del 1 al 10:\n");
    // renglon principal
    printf("   ");
    for (i = 1; i <= 10; i++)
    {
        printf("|%d  ", i);
    }
    printf("\n");
    
    for (i = 1; i <= 10; i++) // columna principal
    {
        if (i == 10)
        {
            printf("%d)", i);
        }
        else
        {
            printf("%d) ", i);
        }
        
        for (j = 1; j <= 10; j++) // table del 1 al 10
        {
            if(i * j >= 10){
                printf("|%d ", i * j);
            }
            else{
                printf("|%d  ", i * j);
            }
        }
        printf("\n");
    }
    return 0;
}

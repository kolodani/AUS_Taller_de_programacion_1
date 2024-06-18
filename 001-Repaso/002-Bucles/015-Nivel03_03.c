// Muestre las tablas de multiplicar del 1 al 10.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("La tabla de multiplicar del 1 a 10.\n");
    printf("    ");
    for (int i = 1; i <= 10; i++)
    {
        printf("|%d* ", i);
    }
    printf("\n");
    for (int i = 1; i <= 10; i++)
    {
        if (i < 10)
        {
            printf("|%d* ", i);
        }
        else
        {
            printf("|%d*", i);
        }
        for (int j = 1; j <= 10; j++)
        {
            if (i * j < 10)
            {
                printf("|%d  ", i * j);
            }
            else
            {
                printf("|%d ", i * j);
            }
        }
        printf("\n");
    }
    return 0;
}

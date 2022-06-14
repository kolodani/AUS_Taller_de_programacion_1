/*
Muestre el abecedario por pantalla.
*/

#include <stdio.h>

int main()
{
    printf("El abecedario: \n");
    
    char letra = 'a';
    char letra2 = 'A';
    int i;
    
    for (i = 0; i < 26; i++)
    {
        printf("-%c ", letra);
        printf("-%c ", letra2);
        letra++;
        letra2++;
    }
    
    return 0;
}

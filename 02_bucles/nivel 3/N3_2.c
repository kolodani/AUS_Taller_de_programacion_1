#include <stdio.h>

int main()
{
    int num, i;
    int factorial = 1;
    
    printf("ingrese un numero y recibiras su factorial:\n");
    scanf("%d", &num);
    
    for (i = 2; i <= num; i++)
    {
        factorial = factorial * i; 
    }
    
    printf("El factorial de %d es: %d", num, factorial);
    
    return 0;
}

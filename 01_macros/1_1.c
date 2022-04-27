#include <stdio.h>

#define min(X, Y) ((X) < (Y) ? (X) : (Y))

int main()
{
    int num1, num2, a;
    
    printf("Te dire cual es el menor numero entre dos enteros: \n");
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    
    if (num1 == num2)
    {
        printf("Los numeros son iguales.\n");
        return 0;
    }
    
    a = min(num1, num2);
    
    printf("El menor numero entre %d y %d es %d\n", num1, num2, a);
    
    return 0;
}

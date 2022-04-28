#include <stdio.h>

#define DIVISIBLE(X,Y) ((X) % (Y) == 0)

int main()
{
    int num1, num2, a;
    printf("Ingrese dos numeros para saber si el primero es divisible por el segundo: \n");
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    
    if (num2 == 0)
    {
        printf("El segundo numero no puede ser 0.\n");
        return 0;
    }
    
    a = DIVISIBLE(num1, num2);
    if (a == 1)
    {
        printf("El numero %d es divisible por %d", num1, num2);
    }
    else
    {
        printf("El numero %d no es divisible por %d", num1, num2);
    }
    return 0;
}

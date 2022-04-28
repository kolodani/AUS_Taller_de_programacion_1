#include <stdio.h>

#define CONSECUTIVOS(X,Y) ((X) == (Y) + 1 || (X) == (Y) - 1)

int main()
{
    int num1, num2, a;
    printf("Ingrese dos numeros para saber si son consecutivos: \n");
    printf("Ingrese el primer numero: \n");
    printf("-> ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: \n");
    printf("-> ");
    scanf("%d", &num2);
    
    a = CONSECUTIVOS(num1, num2);
    
    if (num1 == num2)
    {
        printf("Los numeros %d y %d son iguales.\n", num1, num2);
    }
    if (a == 1)
    {
        if (num1 > num2)
        {
            printf("Los numeros %d y %d son consecutivos.\n", num2, num1);
        }
        else
        {
            printf("Los numeros %d y %d son consecutivos.\n", num1, num2);
        }
    }
    else
    {
        printf("Los numeros %d y %d no son consecutivos.\n", num1, num2);
    }
    return 0;
}

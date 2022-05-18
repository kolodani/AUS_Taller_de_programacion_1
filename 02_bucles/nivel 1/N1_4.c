#include <stdio.h>

int main()
{
    int numero1, numero2, i;
    int suma = 0;
    
    
    printf("Ingrese dos numeros enteros: \n");
    printf("Ingrese el primer numero: \n");
    printf("-> ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo numero: \n");
    printf("-> ");
    scanf("%d", &numero2);
    
    while (numero1 > numero2)
    {
        printf("El segundo numero deberia ser el mayor.\n");
        printf("Ingrese el segundo numero de nuevo: \n");
        printf("-> ");
        scanf("%d", &numero2);
    }
    
    for (i = numero1; i <= numero2; i++)
    {
        suma = suma + i;
    }
    printf("La suma de los numeros entre %d y %d es: %d", numero1, numero2, suma);
    return 0;
}

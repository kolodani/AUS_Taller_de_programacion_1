#include <stdio.h>

int main()
{
    int numero1, numero2, i;
    int producto = 1;
    printf("Ingrese dos numeros enteros: \n");
    printf("Ingrese el primer numero: \n");
    printf("-> ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo numero: \n");
    printf("-> ");
    scanf("%d", &numero2);
    
    if (numero1 > numero2)
    {
        printf("El segundo numero deberia ser el mayor.\n");
        return 0;
    }
    
    for (i = numero1; i <= numero2; i++)
    {
        producto = producto * i;
    }
    printf("El producto de los numeros entre %d y %d es: %d", numero1, numero2, producto);
    return 0;
}

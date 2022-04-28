#include <stdio.h>

int main()
{
    float numero;
    float suma = 0.0;
    int contador = 0;
    
    printf("Ingrese varios numeros para sacar el promedio: \n");
    printf("Al ingresar 0 el sistema dejara de contar y mostrara el promedio: \n");
    
    do
    {
        printf("-> ");
        scanf("%f", &numero);
        if (numero != 0)
        {
            suma = suma + numero;
            contador++;
        }
    } while (numero != 0);
    
    printf("El promedio de los numeros ingresados es: %.2f", (float)suma / contador);
    
    return 0;
}

// Calcule el promedio de 10 números ingresados por el usuario

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero, suma = 0, promedio;

    printf("Ingrese 10 numeros enteros y te dire el promedio\n");
    printf("Ingrese un numero y oprima enter\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("%d) ", i);
        scanf("%d", &numero);
        suma += numero;
    }

    promedio = suma / 10;
    printf("El promedio es: %d", promedio);

    return 0;
}

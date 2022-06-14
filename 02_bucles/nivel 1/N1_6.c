/*
Calcule el promedio de 10 números ingresados por el usuario
*/
#include <stdio.h>

int main()
{
    int i;
    float nota, suma;
    printf("Ingrese 10 numeros y te daremos el promedio: \n");
    for (i = 1; i <= 10; i++)
    {
        printf("Ingrese el numero %d: ", i);
        scanf("%f", &nota);
        suma = suma + nota;
    }
    printf("el promedio es: %f", suma / 10);
    return 0;
}

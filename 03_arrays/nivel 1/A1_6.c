/*
Declare un array de 10 enteros en el rango [0, 100] (asegurarlo) y 
muestre por pantalla dichos elementos junto con la suma, el promedio y la varianza.
Investigar sobre los términos que desconozca.
*/
#include <stdio.h>
#define N 10

int main()
{
    int i;
    int A[N];
    int suma = 0;
    float prom = 0;
    float varianza = 0;
    float suma_varianza = 0;
    
    // ingreso de datos
    printf("Ingrese los 10 valores enteros en el rango [0, 100] para el array: \n");
    for (i = 0; i < N; i++)
    {
        printf("Ingrese el valor de A[%d]: \n", i + 1);
        printf("> ");
        scanf("%d", &A[i]);
        if (A[i] < 0 || A[i] > 100)
        {
            printf("El valor ingresado no esta en el rango [0, 100]\n");
            i--;
        }
    }
    
    // suma, promedio y varianza
    for (i = 0; i < N; i++)
    {
        suma = suma + A[i];
    }
    
    prom = suma / N;
    
    for (i = 0; i < N; i++)
    {
        suma_varianza =+ (A[i] - prom) * (A[i] - prom);
    }
    
    varianza = suma_varianza / N;
    
    // mostrar resultados
    printf("el array A es: \n");
    for (i = 0; i < N; i++)
    {
        printf("A[%d] = %d\n", i + 1, A[i]);
    }
    printf("La suma es: %d\n", suma);
    printf("El promedio es: %f\n", prom);
    printf("La varianza es: %f\n", varianza);
    
    return 0;
}

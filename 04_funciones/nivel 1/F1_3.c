/*
Reciba 3 floats indicando la longitud de los lados de un triángulo e 
indique si es posible formar un triángulo con dichos lados.
*/

#include <stdio.h>
#define TRUE 1
#define FALSE 0

float ingresar_lado(int *);
float validar_lado(float);
float triangulo(float, float, float);

int main()
{
    int contador = 1;
    float lado1, lado2, lado3;
    printf("ingrese tres longitudes y te dire si pudes hacer un triangulo, y que tipo de triangulo es\n");
    lado1 = ingresar_lado(&contador);
    lado2 = ingresar_lado(&contador);
    lado3 = ingresar_lado(&contador);
    if (validar_lado(lado1) == TRUE && validar_lado(lado2) == TRUE && validar_lado(lado3) == TRUE)
    {
        triangulo(lado1, lado2, lado3);
    }
    else
    {
        printf("no puedes hacer un triangulo con una o mas longitudes iguales o menores a cero\n");
    }
    
    return 0;
}

float ingresar_lado(int *a)
{
    float lado;
    printf("ingrese el lado %d\n", *a);
    printf("> ");
    scanf("%f", &lado);
    *a++;
    return lado;
}

float validar_lado(float lado)
{
    if (lado <= 0)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

float triangulo(float lado1, float lado2, float lado3)
{
    if (lado1 == lado2 && lado2 == lado3)
    {
        printf("es un triangulo equilatero\n");
        printf("lado 1: %f\n", lado1);
        printf("lado 2: %f\n", lado2);
        printf("lado 3: %f\n", lado3);
    }
    else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3)
    {
        printf("es un triangulo isosceles\n");
        printf("lado 1: %f\n", lado1);
        printf("lado 2: %f\n", lado2);
        printf("lado 3: %f\n", lado3);
    }
    else
    {
        printf("es un triangulo escaleno\n");
        printf("lado 1: %f\n", lado1);
        printf("lado 2: %f\n", lado2);
        printf("lado 3: %f\n", lado3);
    }
}

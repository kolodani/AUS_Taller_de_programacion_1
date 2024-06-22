// Reciba 3 floats indicando la longitud de los lados de un triángulo e indique si es posible formar un triángulo con dichos lados.

#include <stdio.h>

#define TRUE 1
#define FALSE 0

float validador();
int mayor(float, float, float);
void triangulo(float, float, float);

int main(int argc, char const *argv[])
{
    float lado1, lado2, lado3;

    printf("Ingrese 3 valores y te dire si puedes formar un triangulo y que tipo de triangulose forma.\n");
    lado1 = validador();
    lado2 = validador();
    lado3 = validador();

    if (mayor(lado1, lado2, lado3))
    {
        triangulo(lado1, lado2, lado3);
    }
    else
    {
        printf("Un lado no puede ser mayor a la suma de los otros dos, no se puede hacer un triangulo.\n");
    }

    return 0;
}

float validador()
{
    int bucle;
    float lado;
    do
    {
        printf("Ingrese un valor valido de lado (valor positivo):\n");
        printf("> ");
        scanf("%f", &lado);
        if (lado > 0)
        {
            bucle = FALSE;
            printf("Lado ingresado perfecto: %f\n", lado);
        }
        else
        {
            bucle = TRUE;
            printf("Lado ingresado incorrecto: %f\n", lado);
        }
    } while (bucle);
    return lado;
}

int mayor(float lado1, float lado2, float lado3)
{
    if (lado1 >= (lado2 + lado3))
    {
        return FALSE;
    }
    else if (lado2 >= (lado1 + lado3))
    {
        return FALSE;
    }
    else if (lado3 >= (lado2 + lado1))
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

void triangulo(float lado1, float lado2, float lado3)
{
    if (lado1 == lado2 && lado1 == lado3)
    {
        printf("Se forma un triangulo EQUILATERO: %f, %f, %f", lado1, lado2, lado3);
    }
    else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3)
    {
        printf("Se forma un triangulo ESCALENO: %f, %f, %f", lado1, lado2, lado3);
    }
    else
    {
        printf("Se forma un triangulo ISOCELES: %f, %f, %f", lado1, lado2, lado3);
    }
}
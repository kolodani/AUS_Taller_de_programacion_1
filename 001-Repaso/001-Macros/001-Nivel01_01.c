// El minimo entre dos enteros

#include <stdio.h>

#define MIN(X, Y) ((X) < (Y) ? (X) : (Y))

int main(int argc, char *argv[])
{
    int numero1, numero2, resultado;
    printf("Ingrese dos numeros a comparar y recibira el minimo\n");
    printf("Ingrese el Primer Numero a comparar:\n");
    printf("> ");
    scanf("%d", &numero1);
    printf("Ingrese el Segundo Numero a comparar:\n");
    printf("> ");
    scanf("%d", &numero2);

    if (numero1 == numero2)
    {
        printf("Los dos numeros son %d, osea son iguales\n", numero1);
    }
    else
    {
        resultado = MIN(numero1, numero2);
        printf("El minimo entre %d y %d es: %d\n", numero1, numero2, resultado);
    }
    return 0;
}

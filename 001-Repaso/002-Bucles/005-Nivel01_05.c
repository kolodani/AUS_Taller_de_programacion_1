// Pida dos números y multiplique todos los números comprendidos entre el primero y el segundo (inclusive).
// Debe controlarse que el segundo número sea mayor que el primero.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int primero, segundo, producto = 1;

    printf("Ingrese dos numeros, te dare el producto de todos los enteros entre ellos\n");
    printf("Ingrese el Primer numero\n");
    printf("> ");
    scanf("%d", &primero);
    printf("Ingrese el Segundo numero\n");
    printf("> ");
    scanf("%d", &segundo);

    if (primero > segundo)
    {
        printf("El primer numero que es %d es mayor que el segundo que es %d\n", primero, segundo);
    }
    else
    {
        for (int i = primero; i <= segundo; i++)
        {
            producto = producto * i;
        }
        printf("El producto de los numeros desde %d hasta %d es: %d\n", primero, segundo, producto);
    }

    return 0;
}
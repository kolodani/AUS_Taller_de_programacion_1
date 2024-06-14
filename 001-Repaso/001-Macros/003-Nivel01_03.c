// Si un numero es par

#include <stdio.h>

#define PAR(X) ((X) % 2 == 0)

int main(int argc, char *argv[])
{
    int numero, a;

    printf("Ingrese un numero entero y te dire si es par\n");
    printf("> ");
    scanf("%d", &numero);

    a = PAR(numero);

    if (a == 0){
        printf("El numero ingresado es %d y es IMPAR\n", numero);
    }
    else if (a == 1) {
        printf("El numero ingresado es %d y es PAR\n", numero);
    }
    else {
        printf("No ingreso un numero valido, error!!!\n");
    }

    return 0;
}

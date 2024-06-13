#include <stdio.h>

#define DIVISIBLE(X,Y) ((X) % (Y) == 0)

int main(int argc, char *argv[])
{
    int primero, segundo, a;

    printf("Ingrese dos numeros enteros y te dire si el primero es divisible por el segundo.\n");
    printf("Ingresa el PRIMER NUMERO\n");
    printf("> ");
    scanf("%d", &primero);
    printf("Ingresa el SEGUNDO NUMERO\n");
    printf("> ");
    scanf("%d", &segundo);

    if(segundo == 0){
        printf("No se puede dividir por cero\n");
    }
    else {
        a = DIVISIBLE(primero, segundo);
        if (a == 1){
            printf("El numero %d es divisible de %d\n", primero, segundo);
        }
        if (a == 0){
            printf("El numero %d no es divisible de %d\n", primero, segundo);
        }
    }

    return 0;
}

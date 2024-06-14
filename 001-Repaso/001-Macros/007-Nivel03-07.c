#include <stdio.h>

#define MAX(X,Y,Z) ((X)>(Y) ? ((X)>(Z) ? (X): (Z)) : ((Y)>(Z) ? (Y) : (Z)))

int main(int argc, char *argv[])
{
    int primero, segundo, tercero, a;

    printf("Ingrese tres numeros enteros y te dire cual es el mayor\n");
    printf("Ingrese el primer numero entero\n");
    printf("> ");
    scanf("%d", &primero);

    printf("Ingrese el segundo numero entero\n");
    printf("> ");
    scanf("%d", &segundo);

    printf("Ingrese el tercer numero entero\n");
    printf("> ");
    scanf("%d", &tercero);

    a = MAX(primero,segundo,tercero);
    printf("El mayor numero de los tres es: %d\n", a);

    return 0;
}

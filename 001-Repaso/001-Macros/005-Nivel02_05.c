// Determinar si un numero esta entre el 0 y el 100

#include <stdio.h>

#define ENTRE_0_100(X) ((X)>=0 && (X)<=100)

int main(){
    int a, numero;

    printf("Ingrese un numero entero y te dire si esta entre 0 y 100\n");
    printf("> ");
    scanf("%d", &numero);

    a = ENTRE_0_100(numero);

    if (a == 1){
        printf("El numero %d esta entre 0 y 100\n", numero);
    }
    else if (a == 0){
        printf("El numero %d no esta entre 0 y 100\n", numero);
    }

    return 0;
}

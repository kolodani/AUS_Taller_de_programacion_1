// Realizar un programa que permita obtener los enteros primos comprendidos entre 1 y 500.
// Implementar una función para determinar si un número es o no primo.

#include <stdio.h>

#define FALSE 0
#define TRUE 1

int primo(int);

int main(int argc, char *argv[])
{
    int esPrimo;
    printf("Los numeros primos del 1 al 500:\n");
    for(int i = 1; i <= 500; i++){
        esPrimo = primo(i);
        if (esPrimo) {
            printf("%d ", i);
        }
    }
    return 0;
}

int primo(int numero){
    int cant = 0;
    for (int i = 1;i <= numero;i++) {
        if(numero % i == 0){
            cant++;
        }
    }
    if (cant <= 2) {
        return TRUE;
    }
    else {
        return FALSE;
    }
}

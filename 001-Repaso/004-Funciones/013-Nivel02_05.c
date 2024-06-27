// Crear una función que al recibir un array de 10 enteros determine si está ordenado de manera ascendente.

#include <stdio.h>

#define N 10
#define TRUE 1
#define FALSE 0

int ordenado(int[]);

int main(int argc, char *argv[])
{
    int arreglo[N];
    int estaOrdenado;
    printf("Ingresa un arreglo y te dire si esta ordenado:\n");
    for (int i = 0; i < N; i++) {
        printf("Valor %d> ", i + 1);
        scanf("%d", &arreglo[i]);
    }
    estaOrdenado = ordenado(arreglo);
    if(estaOrdenado){
        printf("El arreglo SI esta ordenado!!!\n");
    }
    else {
        printf("El arreglo NO esta ordenado!!!\n");
    }

    return 0;
}

int ordenado(int arreglo[]){
    int ordenado = 0;
    for (int i = 1; i < N; i++) {
        if(arreglo[i] < arreglo[i - 1]){
            ordenado++;
        }
    }
    if(ordenado == 0){
        return TRUE;
    }
    else {
        return FALSE;
    }
}


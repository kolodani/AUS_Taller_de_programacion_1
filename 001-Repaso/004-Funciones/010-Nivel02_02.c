// Crear un programa que implemente las siguientes funciones para manipular un array de 10 enteros.
// Las siguientes declaraciones de funciones deben utilizarse y definirse adecuadamente.
// void cargar(int []);
    //carga un array con valores suministrados por el usuario
// void mostrar(int []);
    //muestra un array
// int pertenece(int [], int);
    //determina si un entero está en el array

#include <stdio.h>

#define N 10
#define TRUE 1
#define FALSE 0

void cargar(int []);
void mostrar(int []);
int pertenece(int [], int);

int main(int argc, char *argv[])
{
    int arreglo[N];
    int bucle = 1;
    int opcion;
    int numero;
    int esta;

    printf("Hola, Primero empezaremos cargando un arreglo:\n");
    cargar(arreglo);
    while (bucle) {
        printf("Ahora Ingrese una opcion valida:\n");
        printf("1) Mostrar el arreglo.\n");
        printf("2) Ingresar un numero para saber si esta en el arreglo.\n");
        printf("0) Salir del Programa.\n");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                mostrar(arreglo);
                break;
            case 2:
                printf("Ingrese un numero: ");
                scanf("%d", &numero);
                esta = pertenece(arreglo, numero);
                if(esta){
                    printf("El numero %d esta en el arreglo.\n", numero);
                }
                else {
                    printf("El numero %d no esta en el arreglo.\n", numero);
                }
                break;
            case 0:
                printf("Fin del Programa.\n");
                bucle = 0;
                break;
            default:
                printf("Opcion invalida o incorrecta.\n");
                break;
        }
    }
    return 0;
}

void cargar(int arreglo[]){
    for (int i = 0; i < N; i++) {
        printf("Ingrese el valor %d de arreglo: ", i + 1);
        scanf("%d", &arreglo[i]);
    }
    printf("Arreglo cargado!!!\n");
}

void mostrar(int arreglo[]){
    printf("El arreglo cargado:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
}

int pertenece(int arreglo[], int numero){
    int resultado = FALSE;
    for (int i = 0; i < N; i++) {
        if(arreglo[i] == numero){
            resultado = TRUE;
        }
    }
    return resultado;
}


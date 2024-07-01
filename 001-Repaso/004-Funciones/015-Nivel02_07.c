// Crear funciones para pasar un número de binario a decimal y de decimal a binario.

#include <stdio.h>

void menu();
int respuesta();
int ingreso();
void decimalbinario(int);
void binariodecimal(int);

int main(int argc, char *argv[])
{
    int opcion;
    int numero;

    do {
        menu();
        opcion = respuesta();
        switch (opcion) {
            case 1:
                numero = ingreso();
                decimalbinario(numero);
                break;
            case 2:
                numero = ingreso();
                binariodecimal(numero);
                break;
            case 0:
                printf("Fin del programa.\n");
                break;
            default:
                printf("Opcion invalida!!!.\n");
                break;
        }
    } while (opcion != 0);
    return 0;
}

void menu(){
    printf("1) Decimal a Binario.\n");
    printf("2) Binario a Decimal.\n");
    printf("0) Fin del Programa.\n");
}

int respuesta(){
    int res;
    printf("> ");
    scanf("%d", &res);
    return res;
}

int ingreso(){
    int res;
    printf("Ingrese el valor a convertir:\n");
    printf("> ");
    scanf("%d", &res);
    return res;
}

void decimalbinario(int numero){
    int auxiliar = numero;
    int multiplicador = 1;
    int binario = 0;
    int resto;
    while (numero != 0) {
        resto = numero % 2;
        numero = numero / 2;
        binario = binario + (resto * multiplicador);
        multiplicador = multiplicador * 10;
    }
    printf("El Numero: %d es en binario: %d.\n", auxiliar, binario);
}

void binariodecimal(int numero){
    int auxiliar = numero;
    int multiplicador = 1;
    int decimal = 0;
    int resto;
    while (numero != 0) {
        resto = numero % 10;
        numero = numero / 10;
        decimal = decimal + (resto * multiplicador);
        multiplicador = multiplicador * 2;
    }
    printf("El Numero: %d es en decimal: %d.\n", auxiliar, decimal);
}

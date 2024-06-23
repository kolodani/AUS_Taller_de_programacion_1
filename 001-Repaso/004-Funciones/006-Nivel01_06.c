// Dado un entero, mediante una función determine cuantos dígitos tiene.
// Nota: usar tipo unsigned long long int

#include <stdio.h>

int cantDigitos(unsigned long long int);

int main(int argc, char *argv[])
{
    unsigned long long int numero;
    int digitos;

    printf("Ingrese un numero y te dire cuantos digitos tiene:\n");
    printf("> ");
    scanf("%llu", &numero);

    digitos = cantDigitos(numero);

    printf("El numero %llu tiene %d digitos.\n", numero, digitos);

    return 0;
}

int cantDigitos(unsigned long long int numero){
    int digi = 0;
    while (numero >= 10) {
        digi++;
        numero = numero / 10;
    }
    digi++;
    return digi;
}

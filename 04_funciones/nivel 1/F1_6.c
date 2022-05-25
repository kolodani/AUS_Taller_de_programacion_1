/*
Dado un entero, mediante una función determine cuantos dígitos tiene. 
Nota : usar tipo unsigned long long int
*/

#include <stdio.h>
int digito(unsigned long long int);

int main()
{
    unsigned long long int numero;
    printf("Ingrese un numero entero y yo te dire cuantas cifras tiene:\n");
    printf("> ");
    scanf("%llu", &numero);
    printf("El numero tiene %d cifras\n", digito(numero));
    return 0;
}

int digito(unsigned long long numero)
{
    int contador = 0;
    while (numero != 0)
    {
        numero /= 10;
        contador++;
    }
    return contador;
}

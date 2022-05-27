/*
Crear funciones para pasar un número de binario a decimal y de decimal a binario.
*/

#include <stdio.h>
#include <math.h>
int menu();
int ingresar();
void binario_decimal(int);
void decimal_binario(int);

int main()
{
    int opcion, numero;
    do
    {
        printf("convertidor de binario a decimal y decimal a binario\n");
        opcion = menu();
        if (opcion == 1)
        {
            numero = ingresar();
            binario_decimal(numero);
        }
        else if (opcion == 2)
        {
            numero = ingresar();
            decimal_binario(numero);
        }
        
    } while (opcion != 3);
    return 0;
}

int menu()
{
    int opcion;
    printf("1) de binario a decimal\n");
    printf("2) de decimal a binario\n");
    printf("3) salir\n");
    printf("ingrese una opcion: ");
    scanf("%d",&opcion);
    return opcion;
}

int ingresar()
{
    int numero;
    printf("ingrese un numero: ");
    scanf("%d",&numero);
    return numero;
}

void decimal_binario(int numero)
{
    int copia, aux, binario = 0, N = 1;
    copia = numero;
    do
    {
        aux = numero % 2;
        numero = numero / 2;
        binario = binario + aux * N;
        N = N * 10;
    } while (numero != 0);
    printf("%d en binario es %d\n", copia, binario);
}

void binario_decimal(int numero)
{
    int aux, copia, decimal = 0, T = 0;
    copia = numero;
    do
    {
        aux = numero % 10;
        numero = numero / 10;
        decimal = decimal + aux * pow(2,T);
        T++;
    } while (numero != 0);
    printf("%d en decimal es %d\n", copia, decimal);
}
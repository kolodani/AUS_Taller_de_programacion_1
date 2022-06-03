/*
Calculo total de una compra.Crear un programa que permita tener almacenado el precio unitario
de 5 productos diferentes.El usuario indica cuantos productos quiere comprar de cada tipo,
para indicar ninguno ingresará 0, por supuesto evitar valores negativos.
Si el usuario compra más de 10 productos de un mismo tipo, se debe aplicar un 8 % de descuento
sobre el costo total de los productos de ese tipo en particular.
Si el usuario supera un monto máximo(especificarlo con una macro), se le debe aplicar un 
descuento del 15 % al costo total de toda la compra.
Crear funciones para : almacenar el precio de los 5 productos, 
permitir al usuario ingresar cuantos productos de cada tipo desea adquirir.Mostrar por
pantalla los descuentos que obtuvo(si aplica alguno) y el costo total de la compra.
*/

#include <stdio.h>
#define N 10
#define M 5
#define DESCUENTO_MAX 15
#define DESCUENTO_PRODUCTO 8
#define COMPRA_MAX 500
void bienvenida();
void cartel(int);
float lista(int);
float factura(int, int, float []);

int main()
{
    int i;
    int A[M];
    float B[M], total = 0.0, P;
    bienvenida();
    for (i = 0; i < M; i++)
    {
        cartel(i+1);
        printf("\n");
        printf("> ");
        scanf("%d", &A[i]);
    }
    for (i = 0; i < M; i++)
    {
        factura(A[i],i,B);
    }
    for (i = 0; i < M; i++)
    {
        total += B[i];
    }
    if (total > COMPRA_MAX)
    {
        P = total * DESCUENTO_MAX / 100;
        total = total - P;
        printf("\nse le aplico un descuento del %d porcentaje a su compra por superar %d\n", DESCUENTO_MAX, COMPRA_MAX);
        printf("se ahorro %.2f\n", P);
    }
    printf("\nEl total de la compra es: %.2f\n", total);
    return 0;
}

void bienvenida()
{
    printf("Bienvenido al programa de compra\n");
    printf("acontinuacion se le mostrara cada uno de nuestros productos\n");
    printf("ingrese la cantidad que desea comprar de cada producto, o cero si no quiere ninguno\n");
}

void cartel(int a)
{
    printf("Cuantos producto %d quiere?\n", a);
    printf("sus precios son de %.2f", lista(a));
}

float lista(int a)
{
    float precio1 = 10.36, precio2 = 15.87, precio3 = 20.11;
    float precio4 = 8.64, precio5 = 9.99;
    if (a == 1)
    {
        return precio1;
    }
    else if (a == 2)
    {
        return precio2;
    }
    else if (a == 3)
    {
        return precio3;
    }
    else if (a == 4)
    {
        return precio4;
    }
    else if (a == 5)
    {
        return precio5;
    }
}

float factura(int a, int b, float X[])
{
    if (a > N)
    {
        float D = lista(b + 1) * a * DESCUENTO_PRODUCTO / 100;
        X[b] = lista(b + 1) * a - D;
        printf("\nDescuento en el producto %d de %d%, se ahorro %.2f", b+1, DESCUENTO_PRODUCTO, D);
    }
    else
    {
        X[b] = lista(b + 1) * a;
    }
}
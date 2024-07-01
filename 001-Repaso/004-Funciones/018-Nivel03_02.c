// Calculo total de una compra.
// Crear un programa que permita tener almacenado el precio unitario de 5 productos diferentes.
// El usuario indica cuantos productos quiere comprar de cada tipo, para indicar ninguno ingresará 0,
// por supuesto evitar valores negativos.Si el usuario compra más de 10 productos de un mismo tipo,
// se debe aplicar un 8 % de descuento sobre el costo total de los productos de ese tipo en particular.
// Si el usuario supera un monto máximo(especificarlo con una macro), se le debe aplicar un descuento
// del 15 % al costo total de toda la compra.Crear funciones para : almacenar el precio de los 5 productos,
// permitir al usuario ingresar cuantos productos de cada tipo desea adquirir.
// Mostrar por pantalla los descuentos que obtuvo(si aplica alguno) y el costo total de la compra.

#include <stdio.h>

#define A 5
#define PROMO 10000

int menu();
void setear(double[]);
void compra(double[], double[]);

int main(int argc, char const *argv[])
{
    double precios[A];
    double cantidad[A];
    int respuesta;
    do
    {
        respuesta = menu();
        switch (respuesta)
        {
        case 1:
            printf("Seteador de precios:\n");
            setear(precios);
            printf("Precios seteados.\n");
            break;
        case 2:
            printf("Cantidad de percios a comprar:\n");
            setear(cantidad);
            printf("Lista de compra echa.\n");
            break;
        case 3:
            printf("Resumen de la compra:\n");
            compra(precios, cantidad);
            break;
        case 0:
            printf("Fin del programa.\n");
            break;
        default:
            printf("Opcion invalida");
            break;
        }
    } while (respuesta != 0);

    return 0;
}

int menu()
{
    int res;
    printf("Menu:\n");
    printf("1) Setear precios.\n");
    printf("2) Comprar.\n");
    printf("3) Total de la compra.\n");
    printf("0) Cerrar el programa.\n");
    scanf("%d", &res);
    return res;
}

void setear(double arreglo[])
{
    for (int i = 0; i < A; i++)
    {
        printf("Ingrese el valor %d: ", i + 1);
        scanf("%lf", &arreglo[i]);
        if (arreglo[i] < 0)
        {
            printf("Ingreso un valor negativo %f.\n", arreglo[i]);
            i--;
        }
    }
}

void compra(double precios[], double cantidad[])
{
    double total = 0.0;
    double promo;
    for (int i = 0; i < A; i++)
    {
        if (cantidad[i] > 10)
        {
            promo = 0.92;
            printf("Producto %d, recibio un descuento del 8 porciento.\n", i + 1);
        }
        else
        {
            promo = 1;
        }
        total = total + precios[i] * cantidad[i] * promo;
    }
    if (total > PROMO)
    {
        total = total * 0.85;
        printf("Compra con 15 porciento de descuento por superar %d.\n", PROMO);
    }
    printf("Total de la compra es: %f.\n", total);
}
// Dado un array A de N enteros cargados manualmente o bien de forma automática y un número entero r en el
// rango[-(N - 1), N - 1].El valor r impondrá rotaciones a derecha(en caso de r positivo) o rotaciones a
// izquierda(en caso de r negativo) sobre los elementos del array A.Una rotación es el cambio de posición
// en los elementos del array.
// Ejemplo,     un array A con N valiendo 10, r estará comprendido en[-9, 9].Es decir,
// dado el array A = [ 45, 11, -5, 80, 6, 99, 105, -200, 22, 1 ],
// Si r = 1 ⇒ A = [ 1, 45, 11, -5, 80, 6, 99, 105, -200, 22 ] Todos los elementos rotaron 1 posición a la derecha
// Si r = -3 ⇒ A = [ -5, 80, 6, 99, 105, -200, 22, 1, 45, 11 ] Todos los elementos rotaron 3 posiciones a la izquierda

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int tamano, movimientos, pivote;
    do
    {
        printf("Ingrese el tamaño del arreglo de valores alateorios:\n");
        printf("> ");
        scanf("%d", &tamano);
        if (tamano < 2 || tamano > 30)
        {
            printf("Ingrese un valor entre 2 y 30\n");
        }
    } while (tamano < 2 || tamano > 30);

    int A[tamano];
    srand(time(NULL));
    printf("Arreglo A:\n");
    printf("A = [ ");
    for (int i = 0; i < tamano; i++)
    {
        A[i] = (rand() % 201) - 100;
        printf("%d ", A[i]);
    }
    printf(" ]\n");

    do
    {
        printf("Ingrese un valor entre %d y %d para mover los valores del arreglo:\n", -1 * (tamano - 1), (tamano - 1));
        printf("> ");
        scanf("%d", &movimientos);
    } while (movimientos <= (-1 * tamano) || movimientos >= (tamano));

    if (movimientos < 0)
    {
        movimientos = tamano + movimientos;
    }

    for (int i = 0; i < movimientos; i++)
    {
        pivote = A[tamano - 1];
        for (int j = 1; j < tamano; j++)
        {
            A[tamano - j] = A[tamano - j - 1];
        }
        A[0] = pivote;
    }

    printf("Arreglo A corrido movido:\n");
    printf("A = [ ");
    for (int i = 0; i < tamano; i++)
    {
        printf("%d ", A[i]);
    }
    printf(" ]\n");

    return 0;
}

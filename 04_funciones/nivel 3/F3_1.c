/*
Crear funciones que mediante arrays se emulen operaciones de conjuntos.
- En primer lugar existirán dos arrays A y B de 10 elementos enteros comprendidos en el rango [0. 100].
- Debe crearse una función que cargue los arrays de forma aleatoria pero que no ingrese valores
repetidos en cada array, es decir debemos controlar en esa función que cuando se propone un número
aleatorio para almacenar en la posición i del array no esté dicho número en ninguna de las 
posiciones 0, 1, …, i-1.
- Luego de la carga de los arrays mostrarlos por pantalla.
- Crear una función que muestre por pantalla la intersección de estos “conjuntos”,
es decir los elementos de A que estén presentes en B.
- Crear una función que muestre por pantalla la unión de estos “conjuntos”,
es decir los elementos pertenecientes a A y B, sin repetir.
- Crear una función que muestre por pantalla la diferencia entre estos “conjuntos”,
es decir los elementos pertenecientes a A no pertenecientes a B.
*/

// librerias
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// definiciones
#define N 10
#define TRUE 1
#define FALSE 0
// prototipos
void semilla();
void crear(int[], int[], int);
int iguales(int[], int[], int);
int repetido(int[], int, int);
void mostrar(int[], int);
int interseccion(int[], int[], int);
int unionC(int[], int[], int);
int diferencia(int[], int[], int);

int main()
{
    int A[N], B[N];
    crear(A, B, N); // crear arreglo A
    printf("A: "); 
    mostrar(A, N); // mostrar arreglo A
    /*
    crear(B, N); // crear arreglo B
    iguales(A, B, N); // verificar si A y B son iguales
    */
    printf("B: ");
    mostrar(B, N); // mostrar arreglo B
    interseccion(A, B, N); // interseccion de A y B
    unionC(A, B, N); // union de A y B
    diferencia(A, B, N); // diferencia de A y B
    return 0;
}

void semilla()
{
    srand(time(NULL));
}

void crear(int X[], int Y[] ,int a)
{
    semilla();
    int i;
    for (i = 0; i < a; i++)
    {
        do
        {
            X[i] = rand() % 101;
        } while (repetido(X, X[i], i) == TRUE);
        do
        {
            Y[i] = rand() % 101;
        } while (repetido(Y, Y[i], i) == TRUE);
    }
}
/*
int iguales(int X[], int Y[], int a)
{
    do
    {
        int i, contador = 0;
        for (i = 0; i < a; i++)
        {
            if (X[i] == Y[i])
            {
                contador++;
            }
        }
        if (contador == a)
        {
            crear(Y, a);
        }
    } while (X[0] == Y[0]);
}
*/
int repetido(int X[], int repite, int hasta)
{
    if (hasta == 0)
    {
        return FALSE;
    }
    else
    {
        int i;
        for (i = 0; i < hasta; i++)
        {
            if (repite == X[i])
            {
                return TRUE;
            }
        }
        return FALSE;
    }
}

void mostrar(int X[], int a)
{
    int i;
    for (i = 0; i < a; i++)
    {
        printf("%d ", X[i]);
    }
    printf("\n");
}

int interseccion(int X[], int Y[], int a)
{
    int i, j, k = 0, Z[a];
    for (i = 0; i < a; i++)
    {
        if (repetido(X, Y[i], a) == TRUE)
        {
            Z[k] = Y[i];
            k++;
        }
    }
    printf("Interseccion: ");
    mostrar(Z, k);
}

int unionC(int X[], int Y[], int a)
{
    int i, j, k = 0, Z[a*2];
    for (i = 0; i < a; i++)
    {
        Z[i] = X[i];
        k++;
    }
    for (j = 0; j < a; j++)
    {
        if(repetido(Z, Y[j], k) == FALSE)
        {
            Z[k] = Y[j];
            k++;
        }
    }
    printf("Union: ");
    mostrar(Z, k);
}

int diferencia(int X[], int Y[], int a)
{
    int i, j, k = 0, Z[a];
    for (i = 0; i < a; i++)
    {
        if (repetido(Y, X[i], a) == FALSE)
        {
            Z[k] = X[i];
            k++;
        }
    }
    printf("Diferencia: ");
    mostrar(Z, k);
}
/*
Permitir al programa el almacenamiento de una matriz 3x3 con enteros comprendidos en el rango de
valores[1, 9].Cargar dicha matriz manualmente.Mediante una función se debe determinar si
la matriz resultante representa o no un cuadrado mágico, donde las suma de los valores en cada fila,
columna y diagonales da el mismo número.
*/

#include <stdio.h>
#define N 3
#define MAGICO 15
#define TRUE 1
#define FALSE 0
void cartel();
int inicializar(int [][N]);
int cargar(int [][N]);
int numero(int);
int repetido(int [][N], int, int);
int CUBO(int[][N]);
int suma_fila(int [][N], int);
int suma_columna(int [][N], int);
int diagonal(int[][N]);

int main()
{
    int matriz[N][N], resultado;
    inicializar(matriz);
    cartel();
    cargar(matriz);
    resultado = CUBO(matriz);
    if (resultado == TRUE)
    {
        printf("ES UN CUADRADO MAGICO\n");
    }
    else
    {
        printf("NO ES UN CUADRADO MAGICO\n");
    }
    return 0;
}

void cartel()
{
    printf("BIENVENIDO AL PROGRAMA DE DETECCION DE CUADRADO MAGICO\n");
    printf("Usted debera ingresar los valores del 1 al 9 en el cubo y te dire si es magico\n");
}

int inicializar(int matriz[][N])
{
    int i, j;
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            matriz[i][j] = 0;
        }
    }
}

int cargar(int matriz[][N])
{
    int i, j;
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            do
            {
                do
                {
                    printf("Ingrese el valor de la posicion [%d][%d]: ", i+1, j+1);
                    scanf("%d", &matriz[i][j]);
                } while (numero(matriz[i][j]) == FALSE);
            } while (repetido(matriz, i, j) == TRUE);
        }
    }
}

int repetido(int matriz[][N], int k, int l)
{
    int i, j;
    
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if ((matriz[i][j] == matriz[k][l]) && ((i != k) || (j != l)))
            {
                printf("El valor ingresado ya existe en la posicion [%d][%d]\n", i+1, j+1);
                return TRUE;
            }
        }
    }
    return FALSE;
}

int numero(int a)
{
    if (a >= 1 && a <= 9)
    {
        return TRUE;
    }
    else
    {
        printf("El valor ingresado no es valido\n");
        return FALSE;
    }
}

int CUBO(int matriz[][N])
{
    int i, fila, columna, diago;
    for (i = 0; i < N; i++)
    {
        fila = suma_fila(matriz, i);
        columna = suma_columna(matriz, i);
        if (fila != MAGICO || columna != MAGICO)
        {
            return FALSE;
        }
    }
    diago = diagonal(matriz);
    if (diago != TRUE)
    {
        return FALSE;
    }
    return TRUE;
}

int suma_fila(int matriz[][N], int i)
{
    int j, suma = 0;
    for (j = 0; j < N; j++)
    {
        suma += matriz[i][j];
    }
    return suma;
}

int suma_columna(int matriz[][N], int i)
{
    int j, suma = 0;
    for (j = 0; j < N; j++)
    {
        suma += matriz[j][i];
    }
    return suma;
}

int diagonal(int matriz[][N])
{
    int i, suma1 = 0, suma2 = 0;
    for (i = 0; i < N; i++)
    {
        suma1 += matriz[i][i];
    }
    for (i = 0; i < N; i++)
    {
        suma2 += matriz[i][N-1-i];
    }
    if (suma1 != MAGICO || suma2 != MAGICO)
    {
        return FALSE;
    }
    return TRUE;
}
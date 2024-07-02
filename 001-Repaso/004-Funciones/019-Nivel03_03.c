// Permitir al programa el almacenamiento de una matriz 3x3 con enteros comprendidos en el rango de valores[1, 9].
// Cargar dicha matriz manualmente.
// Mediante una función se debe determinar si la matriz resultante representa o no un cuadrado mágico,
// donde las suma de los valores en cada fila, columna y diagonales da el mismo número.

#include <stdio.h>

#define M 3
#define N 9
#define FALSE 0
#define TRUE 1
#define TOTAL 15

void llenar(int[]);
void carga(int[][M], int[]);
int cuadrado(int[][M]);

int main(int argc, char const *argv[])
{
    int matriz[M][M];
    int validar[N];
    llenar(validar);
    printf("CUADRADO MAGICO.\n");
    printf("Ingrese los valores y te dire si es un cuadrado magico.\n");
    carga(matriz, validar);
    if (cuadrado(matriz) == TRUE)
    {
        printf("Es un cuadrado magico\n");
    }
    else
    {
        printf("No es un cuadrado magico\n");
    }
    return 0;
}

void llenar(int validar[])
{
    for (int i = 0; i < N; i++)
    {
        validar[i] = 0;
    }
}

void carga(int matriz[][M], int validar[])
{
    int aux;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("Ingrese el valod (%d,%d): ", i + 1, j + 1);
            scanf("%d", &aux);
            if (validar[aux - 1] == TRUE)
            {
                printf("El numero ya esta includio, ingrese otro numero del [1, 9].\n");
                j--;
            }
            else
            {
                if (aux >= 1 && aux <= 9)
                {
                    matriz[i][j] = aux;
                    validar[aux - 1] = 1;
                }
                else
                {
                    printf("El numero esta fuera del rando de [1, 9]\n");
                }
            }
        }
    }
}

int cuadrado(int matriz[][M])
{
    int cuadrado = 0;
    for (int i = 0; i < M; i++)
    {
        int sumaFila = 0;
        int sumaColumna = 0;
        for (int j = 0; j < M; j++)
        {
            sumaColumna = sumaColumna + matriz[i][j];
            sumaFila = sumaFila + matriz[j][i];
        }
        if (sumaColumna != TOTAL || sumaFila != TOTAL)
        {
            cuadrado++;
        }
    }
    int sumaDiagonal = 0;
    int sumaDiagonal2 = 0;
    for (int i = 0; i < M; i++)
    {
        sumaDiagonal = sumaDiagonal + matriz[i][i];
        sumaDiagonal2 = sumaDiagonal2 + matriz[i][M - (i + 1)];
    }
    if (sumaDiagonal != TOTAL || sumaDiagonal2 != TOTAL)
    {
        cuadrado++;
    }
    if (cuadrado == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

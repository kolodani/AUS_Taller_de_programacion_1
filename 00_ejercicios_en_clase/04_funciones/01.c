#include <stdio.h>
#define N 5
#define TRUE 1
#define FALSE 0
void carga(int[]);               // funcion de carga de arreglos
int pertenece(int[], int, int);  // funcion encuentra los valores que pertenecen o no al arreglo
void muestra(int[], int);        // funcion que muestra el arreglo
int unionC(int[], int[], int[]); // funcion de union
int interC(int[], int[], int[]); // funcion de interseccion
int restaC(int[], int[], int[]); // funcion de resta

// programa principal
int main()
{
    int A[N], B[N], cant;
    int U[2 * N], I[N], D[N];

    carga(A);
    carga(B);
    muestra(A, N);
    muestra(B, N);
    cant = unionC(A, B, U);
    muestra(U, cant);
    cant = interC(A, B, I);
    muestra(I, cant);
    cant = restaC(A, B, D);
    muestra(D, cant);

    return 0;
}

// funcion de carga de arreglos definido
void carga(int X[])
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("Elemento %d\n", i + 1);
        do
        {
            printf("> ");
            scanf("%d", &X[i]);
        } while (pertenece(X, X[i], i) == TRUE);
    }
}

// funcion que encuentra los valores repetidos
int pertenece(int H[], int que, int hasta)
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
            if (que == H[i])
            {
                return TRUE;
            }
        }
        return FALSE;
    }
}

// funcion que muestra el arreglo por pantalla
void muestra(int A[], int hasta)
{
    int i;
    for (i = 0; i < hasta; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

// funcion union
int unionC(int A[], int B[], int U[])
{
    int cardinal = 0, i, j;
    for (i = 0; i < N; i++)
    {
        U[i] = A[i];
        cardinal++;
    }
    for (j = 0; j < N; j++)
    {
        if (pertenece(U, B[j], i) == FALSE)
        {
            U[i] = B[j];
            i++;
            cardinal++;
        }
    }
    return cardinal;
}

// funcion interseccion
int interC(int A[], int B[], int I[])
{
    int ib, ii = 0;
    for (ib = 0; ib < N; ib++)
    {
        if (pertenece(A, B[ib], N) == TRUE)
        {
            I[ii] = B[ib];
            ii++;
        }
    }
    return ii;
}

// funcion resta
int restaC(int A[], int B[], int D[])
{
    int i, j = 0, car = 0;
    for (i = 0; i < N; i++)
    {
        if (pertenece(B, A[i], N) == FALSE)
        {
            D[car] = A[i];
            car++;
        }
    }
    return car;
}

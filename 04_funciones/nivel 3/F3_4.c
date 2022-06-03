/*
Crear un programa que permita emular el lanzamiento de un dado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 6
int crear (int [], int, int []);
int aciertos (int [], int, int []);
int cantidades(int , int []);
int final(int [], int);

int main()
{
    int numero, tiradas, ACIERTO[N], A = 0;
    char r[][10] = {"Muy malo", "Malo", "Regular", "Bueno", "Muy bueno", "Excelente"};
    printf("BIENVENIDO AL PROGRAMA DE LANZAMIENTO DE DADOS\n");
    do
    {
        printf("Elija un numero entre 1 y 6 para lanzar el dado\n");
        printf("> ");
        scanf("%d", &numero);
        if (numero < 1 || numero > 6)
        {
            printf("El numero debe estar entre 1 y 6\n");
        }
    } while (numero < 1 || numero > 6);
    do
    {
        printf("Ahora elige el numero de lanzamientos que quieres realizar entre 5 y 30\n");
        printf("> ");
        scanf("%d", &tiradas);
        if (tiradas < 5 || tiradas > 30)
        {
            printf("El numero debe estar entre 5 y 30\n");
        }
    } while (tiradas < 5 || tiradas > 30);
    int DADO[tiradas];
    crear(DADO, tiradas, ACIERTO);
    aciertos(DADO, tiradas, ACIERTO);
    A = final(ACIERTO, numero);
    printf("Tu resultado fue: %s\n", r[A]);
    return 0;
}

int crear(int dado[], int a, int acierto[])
{
    srand(time(NULL));
    int i;
    for (i = 0; i < a; i++)
    {
        dado[i] = rand() % 6 + 1;
        printf("%d ", dado[i]);
    }
    for (i = 0; i < N; i++)
    {
        acierto[i] = 0;
    }
    printf("\n");
}

int aciertos(int dado[], int m, int acierto[])
{
    int i;
    for (i = 0; i < m; i++)
    {
        cantidades(dado[i], acierto);
    }
    for (i = 0; i < N; i++)
    {
        printf("El lado %d salio: %d", i + 1, acierto[i]);
        printf("\n");
    }
}

int cantidades(int d, int acierto[])
{
    acierto[d-1]++;
}

int final(int acierto[], int numero)
{
    int i, contador = 0;
    for (i = 0; i < N; i++)
    {
        if ((acierto[i] <= acierto[numero - 1]) && (acierto[i] != acierto[numero - 1]))
        {
            contador++;
        }
    }
    return contador;
}

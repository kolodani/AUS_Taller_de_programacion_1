// Crear un programa que permita emular el lanzamiento de un dado.
// - El programa debe permitir al usuario "apostar" a un número n entre 1 y 6 (validar rango) e indicar
// cuantas veces desea lanzar el dado (mínimo 5 veces, máximo 30 veces, validarlo).
// Cada "lanzamiento" es un número aleatorio en [1, 6].
// - Al finalizar con los "lanzamientos", se debe mostrar la cantidad de apariciones de cada número.
// - Si el número que indicó es el que más veces apareció recibirá el mensaje de "excelente", si su número elegido /fue
// el segundo en orden de apariciones el mensaje será "muy bueno" y luego los mensajes serán "bueno", "regular",
// "malo" y "muy malo", dependiendo de la cantidad de ocurrencias del número que arriesgó respecto a los otros números.
// Ejemplo: elige el número 2 y 20 lanzamientos
// lanzamientos: 1, 4, 2, 6, 6, 5, 3, 1, 3, 2, 5, 5, 4, 1, 3, 5, 6, 2, 5, 2
// apariciones de 1: 3
// apariciones de 2: 4       Tips: puede usar un array para almacenar los resultados
// apariciones de 3: 2       [ 3, 4, 2, 1, 5, 3] donde la posición i-ésima del array
// apariciones de 4: 2       corresponde a las apariciones del número i+1
// apariciones de 5: 5       También puede ser útil contar con un array
// aparciones de 6: 3        ["muy malo", "malo", "regular", "bueno", "muy bueno", "excelente"]

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 6
#define M 10

int setNumero();
int setTiradas();
void tiradaDado(int[], int[], int);
void resultado(int[], int);
void apariciones(int[]);
int setPrediccion(int[], int);
void adivinanza(char[][M], int);

int main(int argc, char const *argv[])
{
    int lanzamientos[N] = {0, 0, 0, 0, 0, 0};
    char mensajes[N][M] = {"muy malo", "malo", "regular", "bueno", "muy bueno", "excelente"};
    int numero, tiradas, prediccion;
    srand(time(NULL));

    printf("Ingrese el valor de la cara del dado y veremos tu prediccion:\n");
    numero = setNumero();
    tiradas = setTiradas();
    int jugadas[tiradas];

    tiradaDado(lanzamientos, jugadas, tiradas);
    resultado(jugadas, tiradas);
    apariciones(lanzamientos);
    prediccion = setPrediccion(lanzamientos, numero);
    adivinanza(mensajes, prediccion);

    return 0;
}

int setNumero()
{
    int numero;
    do
    {
        printf("Ingrese un numero entre 1 y 6 para el dado:\n");
        printf("> ");
        scanf("%d", &numero);
    } while (numero < 1 || numero > 6);
    return numero;
}

int setTiradas()
{
    srand(time(NULL));

    int numero;
    do
    {
        printf("Ingrese un numero entre 5 y 30 para las tiradas:\n");
        printf("> ");
        scanf("%d", &numero);
    } while (numero < 5 || numero > 30);
    return numero;
}

void tiradaDado(int lanzamientos[], int jugadas[], int tiradas)
{
    for (int i = 0; i < tiradas; i++)
    {
        jugadas[i] = (rand() % 6) + 1;
        lanzamientos[jugadas[i] - 1]++;
    }
}

void resultado(int jugadas[], int tiradas)
{
    printf("Las tiradas de dado son:\n");
    for (int i = 0; i < tiradas; i++)
    {
        printf("%d ", jugadas[i]);
    }
    printf("\n");
}

void apariciones(int lanzamientos[])
{
    for (int i = 0; i < N; i++)
    {
        printf("Apariciones de %d: %d\n", i + 1, lanzamientos[i]);
    }
}

int setPrediccion(int lanzamientos[], int numero)
{
    int prediccion = 0;
    for (int i = 0; i < N; i++)
    {
        if (lanzamientos[numero - 1] >= lanzamientos[i] && (numero - 1) != i)
        {
            prediccion++;
        }
    }
    return prediccion;
}

void adivinanza(char mensajes[][M], int prediccion)
{
    printf("Tu prediccion fue: %s", mensajes[prediccion]);
}
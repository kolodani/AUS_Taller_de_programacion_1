#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// DEFINICION DE CONSTANTES
#define MAX_PARTIDA 8
#define MAX_LETRAS 5
#define MAX_INTENTOS 6
#define PUNTOS 5000
#define PRIMER_ACIERTO 10000
#define LETRA_LUGAR 100
#define LETRA_NOLUGAR 50
#define INTENTO_FALLIDO 500
#define ACIERTO 2000
#define PERDIO 0

// PROTOTIPO DE FUNCIONES
void cartel_de_presentacion();
void menu_partidas(int *);
void cartel_partidas(int *, int);
void aleatorio(int[]);
void getWordInLine(char *, int, char *);
void adivinar_palabra(char *, char *, int *);
void comparar_palabra(char *, char *);
void acerto_palabra(char *, char *, char *);
void finalizar_partida(char *);
void puntaje(int *, int *, char *, char *, int);
void almacenador_puntajes(int **, int *);
void mostrar_puntajes(int[], int);

// PROGRAMA PRINCIPAL
int main()
{
    // VARIABLES
    int cant_total_partidas_jugador = 0;
    int partida_actual = 0;
    int i, j;
    char salida = 's';
    int pos[MAX_PARTIDA];
    char palabra[MAX_LETRAS];
    char palabra_jugador[MAX_LETRAS];
    // JUEGO
    cartel_de_presentacion();
    menu_partidas(&cant_total_partidas_jugador);
    int puntajes_totales[cant_total_partidas_jugador];
    aleatorio(pos);
    // CICLO DE JUEGO
    for (i = 0; i < cant_total_partidas_jugador; i++)
    {
        cartel_partidas(&partida_actual, cant_total_partidas_jugador);
        getWordInLine("PALABRAS.txt", pos[i], palabra);
        adivinar_palabra(palabra, palabra_jugador, &puntajes_totales[i]);
        // FINALIZAR PARTIDA
        finalizar_partida(&salida);
        if (salida == 'N')
        {
            cant_total_partidas_jugador = i + 1;
            break;
        }
    }
    // FIN DE LA PARTIDA
    mostrar_puntajes(puntajes_totales, cant_total_partidas_jugador);
    return 0;
}

// FUNCIONES
void cartel_de_presentacion()
{
    printf("Hola, bienvenido a WORLDE!\n");
    printf("En este juego tendras que adivinar la palabra secreta, que sera de 5 letras.\n");
    printf("Para adivinarla, tendras 6 intentos.\n");
    printf("Para cada intento, te dira si la letra ingresada es correcta o no.\n");
    printf("Te deseo buena suerte! y que comience el juego!!!\n");
}

void menu_partidas(int *a)
{
    printf("Ingrese el numero total de partidas que desea jugar: \n");
    printf("Elija entre 1 y 8 partidas: \n");
    printf("> ");
    scanf("%d", a);
    while (*a < 1 || *a > 8)
    {
        printf("No has elegido una cantidad de partidas valida, intenta de nuevo: (elige entre 1 a 8 partidas)\n");
        printf("> ");
        scanf("%d", a);
    }
}

void cartel_partidas(int *a, int b)
{
    *a = *a + 1;
    printf("Partida Nro %d de %d\n", *a, b);
}

void finalizar_partida(char *respuesta)
{
    printf("Quiere seguir jugando (S/N)?\n");
    printf("> ");
    scanf(" %c", respuesta);
    while (*respuesta != 'S' && *respuesta != 'N')
    {
        printf("No has elegido una respuesta valida, intenta de nuevo: (S/N)\n");
        printf("> ");
        scanf(" %c", respuesta);
    }
    printf("\n");
}

void getWordInLine(char *fileName, int lineNumber, char *p)
{
    FILE *fp;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    fp = fopen(fileName, "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);

    int i = 1;
    while ((read = getline(&line, &len, fp)) != -1)
    {
        if (i == lineNumber)
        {
            strcpy(p, line);
            return;
        }
        i++;
    }
}

void aleatorio(int pos[])
{
    srand(time(NULL));
    int i, j;
    for (i = 0; i < MAX_PARTIDA; i++)
    {
        pos[i] = rand() % 30 + 1;
        for (j = i; j >= 0; j--)
        {
            while ((pos[i] == pos[j]) && (i != j))
            {
                pos[i] = rand() % 30 + 1;
            }
        }
    }
}

void adivinar_palabra(char *palabra, char *p_jugador, int *puntajes)
{
    int i;
    char adivino = 'n';
    int arregllo_puntaje[MAX_LETRAS] = {0, 0, 0, 0, 0};
    int puntaje_actual = PUNTOS;
    for (i = 0; i < MAX_INTENTOS; i++)
    {
        printf("Intento Nro %d de %d\n", i + 1, MAX_INTENTOS);
        printf("Ingrese una palabra:\n");
        printf("> ");
        scanf(" %s", p_jugador);
        comparar_palabra(palabra, p_jugador);
        puntaje(&puntaje_actual, arregllo_puntaje, palabra, p_jugador, i);
        acerto_palabra(palabra, p_jugador, &adivino);
        if (adivino == 's')
        {
            if (i == 0)
            {
                puntaje_actual = PRIMER_ACIERTO;
                almacenador_puntajes(&puntajes, &puntaje_actual);
            }
            else if (i != 0)
            {
                puntaje_actual = puntaje_actual + ACIERTO;
                almacenador_puntajes(&puntajes, &puntaje_actual);
            }
            break;
        }
        if (adivino == 'n')
        {
            puntaje_actual = puntaje_actual - INTENTO_FALLIDO;
        }
    }
    if (adivino == 'n')
    {
        puntaje_actual = PERDIO;
        almacenador_puntajes(&puntajes, &puntaje_actual);
        printf("Mala suerte, no has acertado!\n");
    }
}

void comparar_palabra(char *palabra, char *p_jugador)
{
    int i, j, aux = 0;
    for (i = 0; i < MAX_LETRAS; i++)
    {
        if (palabra[i] == p_jugador[i])
        {
            printf("%c", p_jugador[i]);
            aux++;
        }
        else if (palabra[i] != p_jugador[i])
        {
            for (j = 0; j < MAX_LETRAS; j++)
            {
                if ((palabra[j] == p_jugador[i]) && (i != j))
                {
                    printf("*");
                    aux++;
                }
            }
        }
        if (aux == 0)
        {
            printf("_");
        }
        aux = 0;
    }
    printf("\n");
}

void acerto_palabra(char *palabra, char *p_jugador, char *adivino)
{
    int i, aux = 0;
    for (i = 0; i < MAX_LETRAS; i++)
    {
        if (palabra[i] == p_jugador[i])
        {
            aux++;
        }
    }
    if (aux == MAX_LETRAS)
    {
        printf("Felicidades, adivinaste la palabra!\n");
        *adivino = 's';
    }
}

void puntaje(int *puntaje_actual, int *arregllo_puntaje, char *palabra, char *p_jugador, int i)
{
    int j, k;
    for (j = 0; j < MAX_LETRAS; j++)
    {
        if ((palabra[j] == p_jugador[j]) && (arregllo_puntaje[j] != LETRA_LUGAR))
        {
            arregllo_puntaje[j] = LETRA_LUGAR;
            *puntaje_actual = *puntaje_actual + arregllo_puntaje[j];
        }
        if (palabra[j] != p_jugador[j])
        {
            for (k = 0; k < MAX_LETRAS; k++)
            {
                if ((palabra[j] == p_jugador[k]) && (arregllo_puntaje[j] != LETRA_LUGAR && arregllo_puntaje[j] != LETRA_NOLUGAR))
                {
                    arregllo_puntaje[j] = LETRA_NOLUGAR;
                    *puntaje_actual = *puntaje_actual + arregllo_puntaje[j];
                }
            }
        }
    }
}

void almacenador_puntajes(int **puntajes, int *puntaje_actual)
{
    **puntajes = *puntaje_actual;
}

void mostrar_puntajes(int puntajes[], int total)
{
    int i, aux = 0, suma = 0;
    int intento_mayor, puntaje_mayor = PERDIO, intento_menor, puntaje_menor = PRIMER_ACIERTO;
    for (i = 0; i < total; i++)
    {
        printf("El puntaje de la partida %d fue de: %d\n", i + 1, puntajes[i]);
        if (puntajes[i] > puntaje_mayor)
        {
            puntaje_mayor = puntajes[i];
            intento_mayor = i + 1;
        }
        if (puntajes[i] < puntaje_menor)
        {
            puntaje_menor = puntajes[i];
            intento_menor = i + 1;
        }
        if (puntajes[i] != PERDIO)
        {
            suma = suma + puntajes[i];
            aux++;
        }
    }
    printf("El puntaje mas alto fue de: %d en la partida nro %d\n", puntaje_mayor, intento_mayor);
    printf("El puntaje mas bajo fue de: %d en la partida nro %d\n", puntaje_menor, intento_menor);
    printf("El puntaje promedio fue de: %d\n", suma / aux);
}
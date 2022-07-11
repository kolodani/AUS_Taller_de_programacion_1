// LIBRERIAS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// DEFINICION DE CONSTANTES
#define MAX_PARTIDA 8
#define MAX_LETRAS 5
#define MAX_INTENTOS 6

// PROTOTIPO DE FUNCIONES
void cartel_de_presentacion();
void menu_partidas(int *);
void cartel_partidas(int *, int);
void aleatorio(int []);
void getWordInLine(char *, int, char *);
void adivinar_palabra(char *, char *);
void comparar_palabra(char *, char *);
void finalizar_partida(char *);


//PROGRAMA PRINCIPAL
int main()
{
    // VARIABLES
    int cant_total_partidas_jugador = 0;
    int partida_actual = 0;
    int i;
    char salida = 's';
    int pos[MAX_PARTIDA];
    char palabra[MAX_LETRAS];
    char palabra_jugador[MAX_LETRAS];
    // JUEGO
    cartel_de_presentacion();
    menu_partidas(&cant_total_partidas_jugador);
    aleatorio(pos);
    // CICLO DE JUEGO
    for (i = 0; i < cant_total_partidas_jugador; i++)
    {
        cartel_partidas(&partida_actual, cant_total_partidas_jugador);
        getWordInLine("PALABRAS.txt", pos[i], palabra);
        printf("La palabra es: %s\n", palabra); // linea de prueba
        // en proceso
        adivinar_palabra(palabra, palabra_jugador);
        //
        finalizar_partida(&salida);
        if (salida == 'n')
        {
            break;
        }
    }
    
    
    
    
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
    printf("Quiere seguir jugando (s/n)?\n");
    printf("> ");
    scanf(" %c", respuesta);
    while (*respuesta != 's' && *respuesta != 'n')
    {
        printf("No has elegido una respuesta valida, intenta de nuevo: (s/n)\n");
        printf("> ");
        scanf(" %c", respuesta);
    }
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
        for (j = i; j > +0; j--)
        {
            while ((pos[i] == pos[j]) && (i != j))
            {
                pos[i] = rand() % 30 + 1;
            }
        }
    }
}

void adivinar_palabra(char *palabra, char *p_jugador)
{
    int i;
    for (i = 0; i < MAX_INTENTOS; i++)
    {
        printf("Intento Nro %d de %d\n", i + 1, MAX_INTENTOS);
        printf("Ingrese una palabra:\n");
        printf("> ");
        scanf(" %c", p_jugador);
        comparar_palabra(palabra, p_jugador);
    }
}

void comparar_palabra(char *palabra, char *p_jugador)
{
    int i;
    for (i = 0; i < MAX_LETRAS; i++)
    {
        
    }
    
}
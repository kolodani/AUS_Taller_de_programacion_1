#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_PARTIDA 8
#define MAX_LETRAS 6

void getWordInLine(char *, int , char *);
void aleatorio(int[]);

int main()
{
    // variables
    int cantidad_total_de_partidas, cantidad_de_partidas = 1;
    char respuesta;
    char arreglo_de_palabras[MAX_PARTIDA][MAX_LETRAS];
    int pos[MAX_PARTIDA];
    char palabra[6];

    // carteles de presentacion
    printf("Hola, bienvenido a WORLDE!\n");
    printf("Primero dime cuantas partidas quieres jugar: (elige entre 1 a 8 partidas)\n");
    printf("> ");
    scanf("%d", &cantidad_total_de_partidas);

    // validacion de la cantidad de partidas
    while (cantidad_total_de_partidas < 1 || cantidad_total_de_partidas > 8)
    {
        printf("No has elegido una cantidad de partidas valida, intenta de nuevo: (elige entre 1 a 8 partidas)\n");
        printf("> ");
        scanf("%d", &cantidad_total_de_partidas);
    }
    
    // generador aleatorio para las palabras
    aleatorio(pos);
    
    // ciclo de juego
    do
    {
        printf("Partida Nro %d de %d\n", cantidad_de_partidas, cantidad_total_de_partidas);
        getWordInLine("PALABRAS.txt", pos[cantidad_de_partidas-1], palabra);
        printf("La palabra es: %s\n", palabra);
        arreglo_de_palabras[cantidad_de_partidas-1] = palabra;
        // CODIGO A COMPLETAR
        
        
        
        
        // CODIGO A COMPLETAR
        
            // pregunta si quiere jugar otra partida
        if (cantidad_de_partidas < cantidad_total_de_partidas)
        {
            do
            {
                printf("Quiere pasar a la siguiente partida? (s/n)\n");
                printf("> ");
                scanf(" %c", &respuesta);
                if (respuesta == 's')
                {
                    cantidad_de_partidas++;
                }
                else if (respuesta == 'n')
                {
                    cantidad_de_partidas = (cantidad_total_de_partidas + 1);
                }
                else
                {
                    printf("No has elegido una respuesta valida, intenta de nuevo.\n");
                }
            } while (respuesta != 's' && respuesta != 'n');
        }
        else
        {
            cantidad_de_partidas++;
        }
    } while (cantidad_de_partidas <= cantidad_total_de_partidas);

    return 0;
}

// funcion que uso para obtener una palabra de un archivo (gentileza del profesor Diego A. Bottallo)
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

// funcion que uso para genenrar numeros aleatorios no repetidos para tomar las palabras del archivo
void aleatorio(int pos[])
{
    srand(time(NULL));
    int i, j;
    for (i = 0; i < MAX_PARTIDA; i++)
    {
        pos[i] = rand() % 30 + 1;
        for (j = i; j >+ 0; j--)
        {
            while ((pos[i] == pos[j]) && (i != j))
            {
                pos[i] = rand() % 30 + 1;
            }
        }
    }
}

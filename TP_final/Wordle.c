/*          LIBRERIAS           */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*          DEFINICION DE CONSTANTES            */
#define MAX_PARTIDA 8        // MAXIMO DE PARTIDAS PARA JUGAR
#define MAX_LETRAS 5         // MAXIMO DE LETRAS POR PALABRA
#define MAX_INTENTOS 6       // MAXIMO DE INTENTOS POR PARTIDA
#define MAX_PALABRAS 48      // MAXIMO DE PALABRAS QUE PUEDEN SER USADAS EN LA PARTIDA
#define PUNTOS 5000          // PUNTOS AL INICIAR UNA PARTIDA
#define PRIMER_ACIERTO 10000 // PUNTOS POR ACERTAR LA PALABRA EN EL PRIMER INTENTO
#define ACIERTO 2000         // PUNTOS POR ACERTAR UNA PALABRA
#define INTENTO_FALLIDO 500  // PUNTOS POR FALLAR UN INTENTO
#define PERDIO 0             // PUNTOS POR PERDER UNA PARTIDA
#define LETRA_LUGAR 100      // PUNTOS POR ACERTAR UNA LETRA EN EL LUGAR CORRECTO
#define LETRA_NOLUGAR 50     // PUNTOS POR ACERTAR UNA LETRA EN EL LUGAR INCORRECTO

/*          PROTOTIPO DE FUNCIONES          */
void cartel_de_presentacion();                                                  // CARTEL DE PRESENTACION DEL JUEGO
void menu_partidas(int *);                                                      // MENU DE PARTIDAS
void cartel_partidas(int *, int);                                               // CARTEL DE PARTIDAS
void aleatorio(int[]);                                                          // GENERA NUMEROS ALEATORIOS NO REPETIDOS QUE SE USARAN PARA GENERAR LAS PALABRAS
void getWordInLine(char *, int, char *);                                        // BUSCA UNA PALABRA EN UN ARCHIVO DE TEXTO
void adivinar_palabra(char *, char *, int *, char (*)[MAX_LETRAS], int, int *); // FUNCION PRINCIPAL DEL JUEGO
void comparar_palabra(char *, char *);                                          // COMPARA LA PALABRA ADIVINADA CON LA PALABRA REAL
void acerto_palabra(char *, char *, char *);                                    // FUNCION QUE SE EJECUTA CUANDO LA PALABRA ES ADIVINADA
void finalizar_partida(char *);                                                 // FUNCION QUE SE EJECUTA CUANDO LA PARTIDA TERMINA
void puntaje(int *, int *, char *, char *, int);                                // CALCULA EL PUNTAJE DE LA PARTIDA
void almacenador_puntajes(int **, int *);                                       // ALMACENADOR DE PUNTAJES
void mostrar_puntajes(int[], int);                                              // MUESTRA LOS PUNTAJES DE LAS PARTIDAS
void mostrar_palabras(char (*)[MAX_LETRAS], int);                               // MUESTRA LAS PALABRAS USADAS EN LA PARTIDA

/*              PROGRAMA PRINCIPAL              */
int main()
{
    /*                  VARIABLES                           */
    int cant_total_partidas_jugador = 0;                               // CANTIDAD DE PARTIDAS JUGADAS POR EL JUGADOR
    int partida_actual = 0;                                            // VALOR DE PARTIDA ACTUAL
    int i, j;                                                          // VARIABLES AUXILIARES
    char salida = 'S';                                                 // VARIABLE PARA SALIR DEL JUEGO
    int pos[MAX_PARTIDA];                                              // VARIABLE PARA ALMACENAR LOS NUMEROS ALEATORIOS PARA GENERAR LAS PALABRAS
    int arreglo_de_soluciones[MAX_PARTIDA] = {0, 0, 0, 0, 0, 0, 0, 0}; // VARIABLE PARA ALMACENAR LA CANTIDAD DE INTENTOS POR PARTIDA
    char palabra[MAX_LETRAS];                                          // VARIABLE PARA ALMACENAR LA PALABRA A ADIVINAR
    char palabra_jugador[MAX_LETRAS];                                  // VARIABLE PARA ALMACENAR LA PALABRA JUGADA POR EL JUGADOR
    char arreglo_de_palabras[MAX_PALABRAS][MAX_LETRAS];                // VARIABLE PARA ALMACENAR LAS PALABRAS USADAS EN LA PARTIDA
    char vacio[MAX_LETRAS] = "";                                       // VARIABLE PARA ALMACENAR UNA PALABRA VACIA
    // FOR PARA LLENAR DE PALABRAS VACIAS EL ARREGLO DE PALABRAS
    for (i = 0; i < MAX_PALABRAS; i++)
    {
        strcpy(arreglo_de_palabras[i], vacio);
    }

    /*                      JUEGO                           */
    cartel_de_presentacion();
    menu_partidas(&cant_total_partidas_jugador);       // EL JUGADOR INGRESA LA CANTIDAD DE PARTIDAS QUE DESEA JUGAR
    int puntajes_totales[cant_total_partidas_jugador]; // ARREGLO PARA ALMACENAR LOS PUNTAJES DE LAS PARTIDAS
    aleatorio(pos);                                    // ARREGLO ALEATORIO CREADO

    /*                  CICLO DE JUEGO                      */
    for (i = 0; i < cant_total_partidas_jugador; i++) // CICLO PARA JUGAR TODAS LAS PARTIDAS
    {
        cartel_partidas(&partida_actual, cant_total_partidas_jugador); // CARTEL DE PARTIDAS
        getWordInLine("PALABRAS.txt", pos[i], palabra);                // BUSCA UNA PALABRA Y LA GUARDA EN LA VARIABLE PALABRA
        adivinar_palabra(palabra, palabra_jugador, &puntajes_totales[i], arreglo_de_palabras, i, &arreglo_de_soluciones[i]);
        /*
        ADIVINAR PALABRA ES UNA FUNCION QUE TIENE MAS FUNCIONES DENTRO, POR ESO RECIBE MUCHOS PARAMETROS
        EN ELLA SE VA A REALIZAR MUCHAS ACCIONES QUE SE ESPECIFICAN DENTRO DE LA FUNCION
        */
        /*              FINALIZAR PARTIDA                   */
        if ((i + 1) < cant_total_partidas_jugador) // CONDICION PARA TERMINAR ANTES EL PROGRAMA
        {
            finalizar_partida(&salida); // FUNCION PARA FINALIZAR LA PARTIDA
            if (salida == 'N')
            {
                cant_total_partidas_jugador = i + 1;
                break;
            }
        }
    }
    /*                      FIN DE LA PARTIDA                    */
    printf("LA PARTIDA HA FINALIZADO\n");
    mostrar_puntajes(puntajes_totales, cant_total_partidas_jugador);    // MUESTRA LOS PUNTAJES DE LAS PARTIDAS
    mostrar_palabras(arreglo_de_palabras, cant_total_partidas_jugador); // MUESTRA LAS PALABRAS USADAS EN LA PARTIDA
    return 0;
}

/*                  FUNCIONES                   */
/*
CARTEL DE PRESENTACION, SOLO SE MUESTRA AL COMIENZO DEL PROGRAMA
*/
void cartel_de_presentacion()
{
    printf("HOLA, BIENVENIDOS A WORLDE!\n\n");
    printf("En este juego tendras que adivinar la palabra secreta, que sera de 5 letras.\n");
    printf("Para adivinarla, tendras 6 intentos.\n");
    printf("Para cada intento, te dira si la letra ingresada es correcta o no.\n");
    printf("Si la letra es correcta, se imprimira en pantalla la letra ingresada.\n");
    printf("Si la letra es correcta pero no su ubicacion, se imprimira un asterisco *.\n");
    printf("Si la letra es incorrecta, se imprimira un guion bajo _.\n");
    printf("RECUERDA: JUEGA TU PARTIDA CON LA MAYUSCULAS ACTIVADA\n");
    printf("Te deseo buena suerte! y que comience el juego!!!\n");
}
/*
MENU DE PARTIDAS, SOLO SE MUESTRA AL COMIENZO DEL PROGRAMA
*/
void menu_partidas(int *a)
{
    printf("Ingrese el numero total de partidas que desea jugar: \n");
    printf("Elija entre 1 y 8 partidas: \n");
    printf("> ");
    scanf("%d", a);
    while (*a < 1 || *a > 8) // SOLO ACEPTA NUMEROS VALIDOS DE PARTIDA, NUMEROS ENTRE 1 Y 8
    {
        printf("No has elegido una cantidad de partidas valida, intenta de nuevo: (elige entre 1 a 8 partidas)\n");
        printf("> ");
        scanf("%d", a);
    }
    printf("\n");
}
/*
CARTEL DE PARTIDAS, MUESTRA EL NUMERO DE PARTIDA Y LA CANTIDAD DE PARTIDAS QUE QUEDAN PARA JUGAR
*/
void cartel_partidas(int *a, int b)
{
    *a = *a + 1;
    printf("Partida Nro %d de %d\n\n", *a, b);
}
/*
FUNCION PARA FINALIZAR LA PARTIDA, SE MUESTRA CADA VEZ QUE SE TERMINA UNA PARTIDA, Y SE PIDE AL USUARIO SI DESEA CONTINUAR O NO
*/
void finalizar_partida(char *respuesta)
{
    printf("Quiere seguir jugando (S/N)?\n");
    printf("> ");
    scanf(" %c", respuesta);
    while (*respuesta != 'S' && *respuesta != 'N') // SOLO ACEPTA LETRAS VALIDAS, 'S' PARA SI Y 'N' PARA NO
    {
        printf("No has elegido una respuesta valida, intenta de nuevo: (S/N)\n");
        printf("> ");
        scanf(" %c", respuesta);
    }
    printf("\n");
}
/*
FUNCION QUE BUSCA UNA PALABRA EN EL ARCHIVO Y LA GUARDA EN UNA VARIABLE
*/
void getWordInLine(char *fileName, int lineNumber, char *p)
{
    // VARIABLES PARA LEER EL ARCHIVO
    FILE *fp;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    fp = fopen(fileName, "r"); // ABRE EL ARCHIVO EN MODO LECTURA
    if (fp == NULL)            // SI EL ARCHIVO NO EXISTE, SE MUESTRA UN ERROR
        exit(EXIT_FAILURE);

    // LEE EL ARCHIVO HASTA LA LINEA ESPECIFICADA
    int i = 1;
    while ((read = getline(&line, &len, fp)) != -1)
    {
        if (i == lineNumber)
        {
            strcpy(p, line); // GUARDA LA PALABRA EN LA VARIABLE P
            return;
        }
        i++;
    }
}
/*
FUNCION QUE CREA UN ARREGLO DE NUMEROS ALEATORIOS NO REPETIDOS QUE SON LAS POSICIONES DE LAS PALABRAS EN EL ARCHIVO
*/
void aleatorio(int pos[])
{
    srand(time(NULL)); // SE GENERA UN NUMERO ALEATORIO PARA LA SEMILLA
    int i, j;
    for (i = 0; i < MAX_PARTIDA; i++)
    {
        pos[i] = rand() % 30 + 1; // GENERA UN NUMERO ALEATORIO ENTRE 1 Y 30
        for (j = i; j >= 0; j--)
        {
            while ((pos[i] == pos[j]) && (i != j)) // GENERA OTRO NUMERO SI EL NUMERO GENERADO ES REPETIDO
            {
                pos[i] = rand() % 30 + 1;
            }
        }
    }
}
/*
ADIVINAR PALABRAS ES LA FUNCION DONDE TODO SUCEDE, SE LLAMAN OTRAS FUNCIONES QUE REALIZAN TAREAS DE COMPARACION Y DE PUNTAJE
*/
void adivinar_palabra(char *palabra, char *p_jugador, int *puntajes, char arreglo_de_palabras[][MAX_LETRAS], int partida, int *solucion)
{
    // VARIABLES
    int i;
    char adivino = 'n';                                 // VARIABLE PARA SABER SI EL JUGADOR ADIVINO LA PALABRA O NO
    int arregllo_puntaje[MAX_LETRAS] = {0, 0, 0, 0, 0}; // ARREGLO PARA GUARDAR LOS PUNTAJES DE CADA LETRA ACERTADA
    int puntaje_actual = PUNTOS;                        // PUNTAJE ACTUAL DEL JUGADOR
    solucion = 0;                                       // CONTADOR DE INTENTOS QUE ELJUGADOR REALIZA
    // CICLO DE INTENTOS, NUCLO PRINCIPAL DEL JUEGO Y DEL PROGRAMA
    for (i = 0; i < MAX_INTENTOS; i++)
    {
        solucion++;
        printf("Intento Nro %d de %d\n", i + 1, MAX_INTENTOS); // MUESTRA EL NUMERO DE INTENTO ACTUAL
        printf("Ingrese una palabra:\n");
        printf("> ");
        scanf(" %s", p_jugador); // GUARDA LA PALABRA DEL JUGADOR
        printf("> ");
        strcpy(arreglo_de_palabras[(partida * MAX_INTENTOS) + i], p_jugador); // GUARDA LA PALABRA DEL JUGADOR EN EL ARREGLO DE PALABRAS
        comparar_palabra(palabra, p_jugador);                                 // COMPARA LA PALABRA DEL JUGADOR E IMPRIME RESULTADOS DE CADA LETRA
        acerto_palabra(palabra, p_jugador, &adivino);                         // COMPARA LA PALABRA DEL JUGADOR CON LA PALABRA A ADIVINAR
        if (adivino == 's')                                                   // SECCION QUE SE REALIZA SI EL JUGADOR ADIVINA LA PALABRA
        {
            if (i == 0) // SI SE ACIERTA EN EL PRIMER INTENTO SE HACE ESTE IF
            {
                puntaje_actual = PRIMER_ACIERTO;
                almacenador_puntajes(&puntajes, &puntaje_actual);
            }
            else if (i != 0) // SI SE ACIERTA PERO NO EN EL PRIMER INTENTO SE HACE ESTE IF
            {
                puntaje_actual = puntaje_actual + ACIERTO;
                almacenador_puntajes(&puntajes, &puntaje_actual);
            }
            break;
        }
        if (adivino == 'n') // SECCION QUE SE REALIZA CON CADA INTENTO FALLIDO
        {
            puntaje(&puntaje_actual, arregllo_puntaje, palabra, p_jugador, i); // CALCULA EL PUNTAJE DE LETRA Y LUGAR ACERTADO
            puntaje_actual = puntaje_actual - INTENTO_FALLIDO;
        }
        if (i != MAX_INTENTOS - 1) // SI EL JUGADOR NO ADIVINA LA PALABRA EN EL ULTIMO INTENTO NO SE HACE ESTE IF
        {
            printf("puntaje actual: %d\n\n", puntaje_actual);
        }
    }
    if (adivino == 'n') // SECCION QUE SE REALICA CUANDO EL JUGADOR NO ACERTO LA PALABRA EN LOS 6 INTENTOS
    {
        puntaje_actual = PERDIO;
        almacenador_puntajes(&puntajes, &puntaje_actual);
        printf("Mala suerte, no has acertado!\n");
        printf("puntaje de derrota: %d\n\n", puntaje_actual);
    }
}
/*
COMPARAR PALABRA IMPRIME LOS RESULTADOS DE CADA LETRA DE LA PALABRA DEL JUGADOR
*/
void comparar_palabra(char *palabra, char *p_jugador)
{
    int i, j, aux = 0;
    for (i = 0; i < MAX_LETRAS; i++)
    {
        if (palabra[i] == p_jugador[i]) // SI LA LETRA ES LA CORRECTA EN EL LUGAR CORRECTO, IMPRIME LA LETRA
        {
            printf("%c", p_jugador[i]);
            aux++;
        }
        else if (palabra[i] != p_jugador[i]) // SI LA LETRA NO ES CORRECTA EN EL LUGAR CORRECTO
        {
            for (j = 0; j < MAX_LETRAS; j++)
            {
                if ((palabra[j] == p_jugador[i]) && (i != j)) // SI LA LETRA ES CORRECTA EN EL LUGAR INCORRECTO, IMPRIME UN ASTERISCO
                {
                    printf("*");
                    aux++;
                }
            }
        }
        if (aux == 0) // SI LA LETRA NO ESTA EN LA PALABRA, IMPRIME UN GUION BAJO
        {
            printf("_");
        }
        aux = 0;
    }
    printf("\n");
}
/*
FUNCION QUE COMPARA LA PALABRA DEL JUGADOR CON LA PALABRA A ADIVINAR Y SI ES CORRECTA O NO
*/
void acerto_palabra(char *palabra, char *p_jugador, char *adivino)
{
    int i, aux = 0;
    for (i = 0; i < MAX_LETRAS; i++) // COMPARA LAS PALABRAS LETRA A LETRA
    {
        if (palabra[i] == p_jugador[i])
        {
            aux++; // SUMA SI LA LETRA EN LA POSICION I ES IGUAL A LA PALABRA DEL JUGADOR
        }
    }
    if (aux == MAX_LETRAS) // SI SE ADIVINO LA PALABRA IMPRIME EL CARTEL Y CAMBIA LA VARIABLE PARA TERMINAR EL CICLO DE INTENTOS
    {
        printf("Felicidades, adivinaste la palabra!\n");
        *adivino = 's';
    }
}
/*
FUNCION QUE CALCULA EL PUNTAJE DEL JUGADOR DE ACUERDO A LOS INTENTOS QUE REALIZA Y LAS LETRAS QUE COLOCA
*/
void puntaje(int *puntaje_actual, int *arregllo_puntaje, char *palabra, char *p_jugador, int i)
{
    int j, k;
    for (j = 0; j < MAX_LETRAS; j++)
    {
        if ((palabra[j] == p_jugador[j]) && (arregllo_puntaje[j] != LETRA_LUGAR)) // SI ACERTO LETRA Y LUGAR, NO VUELVE A ASIGNAR PUNTAJE SI YA LO TIENE
        {
            arregllo_puntaje[j] = LETRA_LUGAR;
            *puntaje_actual = *puntaje_actual + arregllo_puntaje[j];
        }
        if (palabra[j] != p_jugador[j]) // SI ACERTO LETRA PERO NO LUGAR, NO VUELVE A ASIGNAR PUNTAJE SI YA LO TIENE
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
/*
FUNCION QUE ALMACENA EL PUNTAJE DEL JUGADOR EN EL ARREGLO DE PUNTAJES
*/
void almacenador_puntajes(int **puntajes, int *puntaje_actual)
{
    **puntajes = *puntaje_actual;
}
/*
FUNCION QUE IMPRIME LOS RESULTADOS DE LA PARTIDA, MUESTRA LOS PUNTAJES Y ESTADISTICAS DE TODAS LAS PARTIDAS
*/
void mostrar_puntajes(int puntajes[], int total)
{
    int i, aux = 0, suma = 0;
    int intento_mayor, puntaje_mayor = PERDIO, intento_menor, puntaje_menor = PRIMER_ACIERTO;
    printf("PUNTAJES DE LAS PARTIDAS:\n");
    for (i = 0; i < total; i++)
    {
        printf("El puntaje de la partida %d fue de: %d\n", i + 1, puntajes[i]); // IMPRIME LOS PUNTAJES DE CADA PARTIDA
        if (puntajes[i] > puntaje_mayor)                                        // SECCION PARA ALMACENAR EL PUNTAJE MAYOR
        {
            puntaje_mayor = puntajes[i];
            intento_mayor = i + 1;
        }
        if (puntajes[i] < puntaje_menor) // SECCION PARA ALMACENAR EL PUNTAJE MENOR
        {
            puntaje_menor = puntajes[i];
            intento_menor = i + 1;
        }
        if (puntajes[i] != PERDIO) // SECCION QUE SUMA LOS PUNTAJES QUE SE GANO LA PARTIDA
        {
            suma = suma + puntajes[i];
            aux++;
        }
    }
    printf("\n");
    printf("El puntaje mas alto fue de: %d en la partida nro %d\n\n", puntaje_mayor, intento_mayor);
    printf("El puntaje mas bajo fue de: %d en la partida nro %d\n\n", puntaje_menor, intento_menor);
    printf("El puntaje promedio fue de: %d\n\n", suma / aux); // IMPRIME EL PUNTAJE PROMEDIO DE TODAS LAS PARTIDAS GANADAS
}
/*
FUNCION QUE MUESTRA LAS PALABRAS EMPLEADAS EN CADA INTENTO DEL JUGADOR
*/
void mostrar_palabras(char arreglo_de_palabras[][MAX_LETRAS], int total_de_partidas)
{
    int i, j, k;
    char vacio[MAX_LETRAS] = "";
    printf("PALABRAS USADAS EN TODO TU JUEGO:\n");
    for (i = 0; i < total_de_partidas; i++)
    {
        printf("Palabras de la partida numero %d: \n", i + 1); // IMPRIME LAS PALABRAS USADAS EN CADA PARTIDA
        for (j = 0; j < MAX_INTENTOS; j++)
        {
            if (strcmp(arreglo_de_palabras[(i * MAX_INTENTOS) + j], vacio) != 0)
            {
                printf("la palabra %d es: ", j + 1); // IMPRIME LAS PALABRAS USADAS EN CADA INTENTO
                for (k = 0; k < MAX_LETRAS; k++)
                {
                    printf("%c", arreglo_de_palabras[(i * MAX_INTENTOS) + j][k]);
                }
                printf("\n");
            }
        }
        printf("\n");
    }
}
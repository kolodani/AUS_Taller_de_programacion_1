#include <stdio.h>

#define MAXLINE 1000    /* tamaño maximo de la linea de entrada */

int max;            /* maxima longitud vista hasta el momento */
char line[MAXLINE]; /* linea de entrada actual */
char longest[MAXLINE]; /* linea de entrada mas larga de guarda aqui */

int getline(void);
int copy(void);

/* imprime la linea de entrada mas larga, version especializada */

int main()
{
    int len;
    extern int max;
    extern char longest[];
    
    max = 0;
    while ((len = getline()) > 0)
        if (len > max) {
            max = len;
            copy();
        }
    if (max > 0)       /* hubo una linea */
        printf("%s", longest);
    return 0;
}

/* getline: version especializada */

int getline(void)
{
    int c, i;
    extern char line[];
    
    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        line[i] = c;
    if (c == '\n') {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}

/* copy: version especializada */

int copy(void)
{
    int i;
    extern char line[], longest[];
    
    i = 0;
    while ((longest[i] = line[i]) != '\0')
        i++;
}
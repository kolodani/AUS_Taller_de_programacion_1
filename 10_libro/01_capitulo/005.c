#include <stdio.h>

/* copia la entrada a la salida; 1a. version*/

int main()
{
    int c;
    
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
    return 0;
}

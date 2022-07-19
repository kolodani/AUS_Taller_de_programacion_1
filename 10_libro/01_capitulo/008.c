#include <stdio.h>

/* cuenta los caracteres de entrada; 1a. version */

int main()
{
    long nc;
    
    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
    return 0;
}

#include <stdio.h>

/* cuenta digitos, espacios en blanco, y otros */

int main()
{
    int c, i, nwhite, nother;
    int ndigit[10];
    
    nwhite = nother = 0;
    for (i = 0; i < 10; i++)
        ndigit[i] = 0;
    while ((c = getchar()) != '#') 
    {
        if (c >= '0' && c <= '9')
            ndigit[c - '0']++;
        else if (c == ' ' || c == '\t' || c == '\n')
            nwhite++;
        else
            nother++;
    }
    printf("Digitos: ");
    for (i = 0; i < 10; i++)
        printf("%d ", ndigit[i]);
    printf("\nEspacios en blanco: %d\nOtros: %d\n", nwhite, nother);
    
    return 0;
}

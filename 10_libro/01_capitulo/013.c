#include <stdio.h>

int main()
{
    int c;
    while ((c = getchar()) != '#')
    {
        if (c == '\n')
            putchar('\n');
        else
            putchar(c);
    }
    
    return 0;
}

#include <stdio.h>

int main()
{
    int c, d = 1;
    while ((c = getchar()) != '#')
    {
        if (c != ' ' || d == 1)
        {
            putchar(c);
        }
        if (c == ' ')
        {
            d = 0;
        }
        if (c != ' ')
        {
            d = 1;
        }
    }
    return 0;
}

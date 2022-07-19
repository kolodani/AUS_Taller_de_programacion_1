#include <stdio.h>

int main()
{
    int c;
    while ((c = getchar()) != '#')
    {
        if (c == ' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c", c);
        }
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int c, nl = 0;
    
    while ((c = getchar()) != 'Q')
        if (c == '\t')
            nl++;
    printf("%d\n", nl);
    return 0;
}

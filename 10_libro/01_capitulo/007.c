#include <stdio.h>

int main()
{
    int d = 10;
    while (d != EOF)
    {
        printf("%d\n", d);
        d--;
    }
    
    return 0;
}

#include <stdio.h>

int F();

int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", F());
    }
    return 0;
}

int F()
{
    static int x = 0;
    x++;
    return x;
}

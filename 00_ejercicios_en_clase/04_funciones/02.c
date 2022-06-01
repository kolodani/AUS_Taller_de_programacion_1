#include <stdio.h>

int triplica(int);
int global = 100;
int main()
{
    int x = 10;
    int y = triplica(x);
    global++;
    return 0;
}

int triplica(int a)
{
    return 3 * a;
    global++;
}
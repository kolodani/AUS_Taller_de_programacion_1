/*
a) Ejecutar el siguiente programa y observar la salida
Buscar en bibliografía información acerca de variables estáticas
b) En base al punto anterior, crear otra función que al invocarla sucesivamente
retorne los valores enteros: 0, 1, 2, 3, 0, 1, 2, 3, …., 0, 1, 2, 3, etc.
*/

#include <stdio.h>

int func();
int func2();

int main()
{
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", func());
    }
    printf("\n");
    for (i = 0; i < 20; i++)
    {
        printf("%d ", func2());
    }
    return 0;
}

int func()
{
    static int b=0;
    return b++;
}

int func2()
{
    static int c = 0;
    if (c == 4)
    {
        c = c - 4;
    }
    return c++;
}
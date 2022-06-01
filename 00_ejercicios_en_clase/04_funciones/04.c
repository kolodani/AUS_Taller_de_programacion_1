#include <stdio.h>
int convertir(char[]);
int dividir(int, int);

int main(int argc, char *argv[]) // ["a.out", "1", "+", "2"]
{
    int i;
    if (argc != 4)
    {
        return 1;
    }
    for (i = 0; i < argc; i++)
    {
        printf("arg %d = %s\n", i, argv[i]);
    }
    char op = *(argv[2]);
    int nro1 = convertir(argv[1]);
    int nro2 = convertir(argv[3]);
    switch (op)
    {
    case '+':
        printf("La suma %d + %d = %d\n", nro1, nro2, nro1 + nro2);
        break;
    case '-':
        printf("La resta %d - %d = %d\n", nro1, nro2, nro1 - nro2);
        break;
    case '*':
        printf("El producto %d x %d = %d\n", nro1, nro2, nro1 * nro2);
        break;
    case '/':
        dividir(nro1, nro2);
    default:
        break;
    }
    return 0;
}

int convertir(char v[])
{
    int res = 0;
    int i = 0;
    while (v[i] != '\0')
    {
        res = res * 10 + (v[i] - '0');
        i++;
    }
    return res;
}

int dividir(int a, int b)
{
    if (b == 0)
    {
        printf("No se puede dividir por cero");
    }
    else
    {
        printf("La division %d / %d = %d\n", a, b, a / b);
    }
}
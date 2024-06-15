// Reciba tres enteros positivos n, p y m, asegurándose que n<m
// - genere la salida n, n + p, n + 2.p, n + 3.p, ....k(k <= m y es de la forma n + NRO.p)
// Ejemplo n = 2, p = 3, m = 10, debe generarse:2, 5, 8
// Ejemplo n = 1, p = 4, m = 21, debe generarse 1, 5, 9, 13, 17, 21

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, p, m;
    printf("Ingrese 3 numeros enteros: n , p y m\n");
    printf("te dare una lista de numeros que empiezan con n, siguen con n + p, n + 2p.... hasta m\n");
    printf("Ingresa el valor n\n");
    printf("> ");
    scanf("%d", &n);
    printf("Ingresa el valor p\n");
    printf("> ");
    scanf("%d", &p);
    printf("Ingresa el valor m\n");
    printf("> ");
    scanf("%d", &m);

    if (n >= m)
    {
        printf("El valor n: %d no es menor al valor de m: %d", n, m);
    }
    else
    {
        printf("Lista de valores: ");
        while (m > n)
        {
            printf("%d ", n);
            n = n + p;
        }
        printf("%d", m);
    }
    return 0;
}

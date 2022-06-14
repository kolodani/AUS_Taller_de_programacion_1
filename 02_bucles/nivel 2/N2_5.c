/*
Reciba tres enteros positivos n, p y m, asegurándose que n<m
- genere la salida n, n+p, n+2.p, n+3.p, .... k (k<=m y es de la forma n+NRO.p)
Ejemplo n=2, p=3, m=10, debe generarse: 2, 5, 8
Ejemplo n=1, p=4, m=21, debe generarse 1,5,9,13,17,21
*/

#include <stdio.h>

int main()
{
    int n, p, m, i;
    
    do
    {
        printf("Ingrese tres numeros enteros positivos: \n");
        printf("-> ");
        scanf("%d", &n);
        printf("-> ");
        scanf("%d", &p);
        printf("-> ");
        scanf("%d", &m);
        
        if (n > m){
            printf("el ultimo numero ingresado tiene que ser el mayor\n");
        }
    } while (n > m);
    
    for (i = 1; i < m; i++)
    {
        if (m < n + i * p)
        {
            break;
        }
        printf("%d\n", n + i * p);
    }
    return 0;
}

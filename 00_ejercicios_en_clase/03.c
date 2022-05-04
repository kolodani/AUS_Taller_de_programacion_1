#include <stdio.h>

int main()
{
    int secreto;
    int intento = 0;
    int cant_intentos = 0;
    int piso = 1, techo = 1000;
    char pista;

    printf("Ingrese un numero del 1 al 1000, Prometo no mirar!\n");

    do
    {
        printf("> ");
        scanf("%d", &secreto);
    } while (secreto < 1 || secreto > 1000);

    while (intento != secreto)
    {
        intento = piso + (techo - piso) / 2;
        printf("Hare un intento!... Es el %d\n", intento);
        cant_intentos++;
        printf("Por favor indicar si mi intento (A)lto, (B)ajo, (E)xacto\n");
        printf("pista> ");
        scanf(" %c", &pista);

        if (pista == 'A')
        {
            techo = intento;
        }
        else if (pista == 'B')
        {
            piso = intento;
        }
        else
        {
            printf("EN TU CARA !!!\n");
        }
    }

    printf("Cantidad de intentos: %d\n", cant_intentos);

    return 0;
}
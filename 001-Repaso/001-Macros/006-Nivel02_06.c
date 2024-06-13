#include <stdio.h>

#define CONSECUTIVOS(X,Y) (X == Y + 1 || X == Y - 1)

int main(int argc, char *argv[])
{
    int numero1, numero2, a;

    printf("Ingrese dos numeros enteros y te dire si son consecutivos\n");
    printf("Ingrese el Primer Numero\n");
    printf("> ");
    scanf("%d", &numero1);

    printf("Ingrese el Segundo Numero\n");
    printf("> ");
    scanf("%d", &numero2);

    a = CONSECUTIVOS(numero1, numero2);

    if (a == 1){
        if(numero1 > numero2){
            printf("Los numeros %d y %d son consecutivos\n", numero2, numero1);
        } else {
            printf("Los numeros %d y %d son consecutivos\n", numero1, numero2);
        }
    } else if (a == 0) {
        printf("Los numeros %d y %d no son consecutivos\n", numero1, numero2);
    }

    return 0;
}

#include <stdio.h>

int main() {
    unsigned long long int i = 1;    //-32000 al 32000 ->  0 al 64000
    unsigned long long int suma = 0;
    unsigned long long int n;

    printf("Ingese un entero positivo: \n");
    do {
        printf("> ");
        scanf("%lu", &n);

        if(n<=0) {
            printf("Por favor ingrese un entero positivo!!\n");
        }
    } while (n<=0);

    while (i<=n) {
        suma = suma + i;
        i++;
        printf(" > suma=%lu - i=%lu \n", suma, i);
    }

    printf("La suma de los primeros %lu enteros positivos es: %lu\n", n, suma);

    return 0;
}

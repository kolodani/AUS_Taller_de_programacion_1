#include <stdio.h>

#define N 500

int main() {
    int i = 1;
    int suma = 0;

    while (i<=N) {
        suma = suma + i;
        i++;
        printf(" > suma=%d - i=%d \n", suma, i);
    }

    printf("La suma de los primeros %d enteros positivos es: %d\n", N, suma);


    return 0;
}

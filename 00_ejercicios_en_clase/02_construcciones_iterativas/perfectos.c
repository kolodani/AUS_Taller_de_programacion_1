#include <stdio.h>
//mostrar los numeros perfectos del 1 al 10000
//6 es un número perfecto porque sus divisores propios son 1, 2 y 3; y 6 = 1 + 2 + 3.
/*Lista de los primeros nros perfectos: https://matemelga.files.wordpress.com/2019/05/lnp.jpg*/

#define N 3500

int main() {
    unsigned long long int i, j;
    unsigned long int sumadiv=0;
    //printf("tamanyo de un int %d tamanyo de un long long int %d", sizeof(int), sizeof(long long int));
    //return 0;

    //recorrer los nros del 1 al 10000
    //para cada numero tomar los divisores propios
    //sumarlos
    //compararlos con el numero que estamos analizando
    //coincidencia mostramos el nro

    for(i=1; i<=N; i++) {
        sumadiv=0;
        printf("Analizando el nro %lu\n", i);
        for(j=1; j<i; j++) {  /*al poner "<" aseguramos divisores propios*/
            if(i%j==0) {
                printf("%llu ", j);
                sumadiv = sumadiv + j;
            }
        }//j
        if (sumadiv==i) {
            printf("El numero %lu es un numero perfecto\n", i);
        }
    }//i

    return 0;
}

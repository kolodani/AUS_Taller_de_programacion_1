#include <stdio.h>
#include <stdlib.h>  //rand()
#include <unistd.h>  //unix standard - getpid()->muestra el Process ID o pid del proceso que ejecuta el programa

//rand()        -> 0 ... RAND_MAX
//rand()%N      -> 0 ... N-1
//1 + rand()%N  -> 1 ... N

#define N 12000
#define R 6
//Vamos a sumar 50 numeros aleatorios

int main() {
    int i;
    int random;
    int cant1=0, cant2=0, cant3=0, cant4=0, cant5=0, cant6=0;

    srand(getpid());    //con get pid consigo una semilla diferente en cada ejecucion => lista de nros aleatorios distinta

    for (i=0; i<N; i++) {
        random = 1+rand()%R;
        printf("%d ", random);

        switch(random) {
            case 1:
                cant1++;
                break;
            case 2:
                cant2++;
                break;
            case 3:
                cant3++;
                break;
            case 4:
                cant4++;
                break;
            case 5:
                cant5++;
                break;
            case 6:
                cant6++;
                break;
        }
    }
    printf("\n");
    printf("Cantidad de 1s: %d \n", cant1);
    printf("Cantidad de 2s: %d \n", cant2);
    printf("Cantidad de 3s: %d \n", cant3);
    printf("Cantidad de 4s: %d \n", cant4);
    printf("Cantidad de 5s: %d \n", cant5);
    printf("Cantidad de 6s: %d \n", cant6);

    return 0;
}

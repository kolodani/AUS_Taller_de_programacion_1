#include <stdio.h>
#include <stdlib.h>  //rand()
#include <time.h>    //time()
#include <unistd.h>  //unix standard - getpid()->muestra el Process ID o pid del proceso que ejecuta el programa

//rand()        -> 0 ... RAND_MAX
//rand()%N      -> 0 ... N-1
//1 + rand()%N  -> 1 ... N

#define N 500
#define R 6
//Vamos a sumar 50 numeros aleatorios

int main() {
    int i;

   //srand(time(NULL));    //s de "seed" semilla
   srand(getpid());    //con get pid consigo una semilla diferente en cada ejecucion => lista de nros aleatorios distinta

    for (i=0; i<N; i++) {
        printf("%d ", 1+rand()%R);
    }
    printf("\n");


    return 0;
}

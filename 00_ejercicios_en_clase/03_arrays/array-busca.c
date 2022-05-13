#include <stdio.h>
#include <stdlib.h> //rand() srand()
#include <unistd.h> //getpid()
//#include <time.h>  //time(NULL)

#define N 1000

int main() {
   int a[N];
   srand(getpid());

   int nro, cant=0;
   printf("Ingrese un entero en [1,100]:\n");
   do {
      printf("> ");
      scanf("%d", &nro);
   } while(nro>100 || nro<1);

   int i;
   for(i=0; i<N; i++) {
      a[i] = 1 + rand()%100;
    //}

    //for(i=0; i<N; i++) {
      printf("%d ", a[i]);
      if(a[i] == nro) {
         cant++;
      }
   }

   printf("\n\n");
   if(cant==0) {
      printf("El numero %d nunca aparecio!\n", nro);
   } else {
      printf("El numero %d esta presente %d veces\n", nro, cant);
   }
   return 0;
}

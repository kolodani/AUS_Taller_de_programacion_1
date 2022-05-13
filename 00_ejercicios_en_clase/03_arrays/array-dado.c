#include <stdio.h>
#include <stdlib.h> //rand() srand()
#include <unistd.h> //getpid()

#define N 1000

/*se lanza un dado N veces y se muestran estadisticas de aparicio de cada numero*/

//carga
//contar cuantas veces aparece cada numero 1 al 6
//estadisticas

int main() {
   int a[N];
   int cants[6] = {0,0,0,0,0,0};  //en cants[0] guardo cuantos 1's aparecen.... en cantss[5] cuantos 6's aparecen
   srand(getpid());

   int i;
   for(i=0; i<N; i++) {
      a[i] = 1 + rand()%6;
      printf("%d ", a[i]);
      //contamos
      cants[ a[i]-1 ]++;
   }

   printf("\n\n");
   int j;
   for (i=0; i<6; i++) {
      printf("Cantidad de numeros %d\n", i+1);
      for(j=0; j<cants[i]; j++) {
         printf("*");
      }
      printf("(%d)\n", cants[i]);
   }

   return 0;
}

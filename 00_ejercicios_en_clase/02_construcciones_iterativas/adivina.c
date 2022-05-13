#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
   int nro_secreto, intento, cant_intentos=0;
   srand(getpid()); 
   
   nro_secreto=1+rand()%1001;

   printf("El numero escreto es: %d\n", nro_secreto);

   printf("Comienza el juego.... adivine un numero entre el 1 y 1000, incluidos\n");

   do {
      printf("Haga un intento... ");
      scanf("%d", &intento);

      cant_intentos++;

      if (intento == nro_secreto) {
         break;
      } else if(intento < nro_secreto) {
         printf("Ummm piense en algo mas grande...\n");
      } else {
         printf("Se paso el numero es menor....\n");
      }
   } while (intento != nro_secreto);

   printf("Para adivinar requirio %d intentos\n", cant_intentos);

   return 0;
}

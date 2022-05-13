#include <stdio.h>

int main() {
   int secreto=0;
   int intento=0;
   int piso=1, techo=1000;
   char resp;

   printf("Ingrese un numero secreto entre 1 y 1000 yo no voy a mirar...\n");
   do {
      printf("> ");
      scanf("%d", &secreto);
      if (secreto < 1 || secreto > 1000) { 
         printf("No me haga trampa!!!\n");
      }
   } while(secreto < 1 || secreto > 1000);

   while (intento != secreto) {   
      printf("Bien haré un intento: ");
      intento = piso+(techo-piso)/2;

      printf("Es el numero %d?\n", intento);
      printf("Diga A si es mas alto y B si es mas bajo por favor.. sino O para decir OK.\n");
      scanf(" %c", &resp);

      if(resp=='A') {
         piso=intento;     
      } else if (resp=='B') {
         techo=intento;
      } else {
         printf("Vamos!! adivine!!!\n");
         break;
      }
   }
   return 0;
}


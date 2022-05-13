#include <stdio.h>

#define ESPAR(nro) ((nro%2)==0)?1:0    //digo 1 si es par, digo 0 si es impar
#define ESPOS(nro) (nro>=0)?1:0    //digo 1 si es positivo, digo 0 si es negativo

int main() {
   int n;

   printf("Por favor ingrese un entero: ");
   scanf("%d",&n);

   //if toma de decision "si tal cosa"
   if(ESPAR(n)==1) {
      printf("Bien! el numero %d es un numero par!!\n", n);
   }


   return 0;
}

#include <stdio.h>

/*
Calcule el promedio de N números positivos, se dejarán de solicitar números hasta que se introduzca el cero.
*/

int main() {
   int suma=0;  //variable para almacenar la suma de los numeros
   int cant=0;  //variable para almacenar la cant de numeros ingresados

   int nro=0;

   //ingreso de datos
   printf("Ingrese numeros enteros positivos, 0 para terminar: \n");
   do {
      //verificar que sea positivo (>=0)
      do {
         scanf("%d", &nro);
     } while(nro < 0);  //si es negativo pedi de nuevo

     if (nro != 0) { //protegemos que el 0 no incremente cantidad
         suma = suma + nro;
         cant = cant + 1;
      }

   } while(nro!=0);  //bucle controla fin de entrada

   //Calcular y mostrar el promedio
   printf("Suma de los numeros: %d\n", suma);
   printf("Cantidad de numeros ingresados: %d\n", cant);

   float prom = suma*1.0/cant;
   if (cant != 0) {  //para evitar la division por cero
      printf("El promedio es %10.2f\n", prom);
      //printf("El promedio es %10.2f\n", suma*(1.0)/cant); //y no declara la variable prom
   } else {
      printf("No se han ingresado numeros!\n");
   }



   return 0;
}

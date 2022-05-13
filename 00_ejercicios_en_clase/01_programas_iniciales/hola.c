#include <stdio.h>   //inclusion de librería STandard Input/Output

//comentario de una línea
/*comentario de
  múltiples
  líneas
*/
int main() {
   int anyo = 2022;  //declaración de variable entera y asignación

   printf("Hola Mundo %d\n", anyo);  //funcion printf de la librería stdio
   //el %d es un modificador de formato para imprimir anyo como un entero, \n es para insertar una nueva línea

   return 0;   //retornamos un entero pues la función main retorna int
}

#include <stdio.h>
#define N 10

/*
A2-5) Dado un array A de N enteros cargados manualmente o bien de forma automática y un número entero r en el rango [-(N-1), N-1].
El valor r impondrá rotaciones a derecha (en caso de r positivo) o rotaciones a izquierda (en caso de r negativo) sobre los elementos del
array A. Una rotación es el cambio de posición en los elementos del array.

Ejemplo, un array A con N valiendo 10, r estará comprendido en [-9, 9].
Es decir, dado el array
A= [ 45, 11, -5, 80, 6, 99, 105, -200, 22, 1],
Si r= 1 ⇒ A= [ 1, 45, 11, -5, 80, 6, 99, 105, -200, 22 ] Todos los elementos rotaron 1 posición a la derecha
Si r=-3 ⇒ A= [ -5, 80, 6, 99, 105, -200, 22, 1, 45, 11 ] Todos los elementos rotaron 3 posiciones a la izquierda
 */

int main() {
    int A[N] = {45, 11, -5, 80, 6, 99, 105, -200, 22, 1};
    int r, i, temp, copia_r;

    //Carga manual o aleatoria

    printf("Ingrese la rotación deseada: \n");
    do {
        printf("> ");
        scanf("%d", &r);
    } while (r<-(N-1) || r > (N-1));

    copia_r = r;

      // -(N-1) <= r <= (N-1)        ===> -9 <= r <= 9

    printf("Array original:\n");
    printf("{ ");
    for(i=0; i<N; i++) {
        printf("%d ", A[i]);
    }
    printf("}\n\n");

      //ROTACIONES!!
      if (r>0) {  //caso de rotaciones a derecha

        while (r>0) {
             //1ro) hacer una copia del ultimo elemento del array
            temp=A[N-1];

             //2do) rotamos a derecha
            for(i=N-2; i>=0; i--) {
                A[i+1] = A[i];
            }

             //3ro) lo que estaba al final del array, ahora está al inicio
            A[0] = temp;

             //4to) indicamos que se cumplió una rotación
            r--;

             //print in-line
            printf("Array luego de la rotacion %d\n", copia_r-r);
            printf("{ "); for(i=0; i<N; i++) { printf("%d ", A[i]); }; printf("}\n");
        }

    } else if (r<0) {
        /*EJERCICIO*/

      } else { // caso r==0
        printf("No quiere rotarlo???\n");
    }

    /*
    printf("El array luego de %d rotaciones\n", copia_r);
    printf("{ ");
    for(i=0; i<N; i++) {
        printf("%d ", A[i]);
    }
    printf("}\n");*/

    return 0;
}

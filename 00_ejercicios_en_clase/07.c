#include <stdio.h>
/*
tipo_retorno nombre_funcion(tipo_parametros){
    cuerpo de la funcion;
    return valor_retorno;
}
*/

//f(x) = x+1
int f(int x) {
    return x+1;
}

//h(x) = 3x
int h(int x); // declaracion o prototipo

int main()
{
    int y = f(8);
    printf("%d\n", y);
    
    y = h(8);
    printf("%d\n", y);
    
    return 0;
}

//definicion
int h(int x) {
    return 3*x;
}
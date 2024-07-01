//  a) Ejecutar el siguiente programa y observar la salida

#include <stdio.h>

int func();
int restador(int);

int main(int argc, char *argv[])
{
    int i = 0;
    for (i = 0; i < 10; i++) {
        printf("%d ", restador(func()));
    }
    return 0;
}

int func(){
    static int b = 0;
    return b++;
}

int restador(int numero){
    static int resta = -4;
    if (numero % 4 == 0) {
        resta = resta + 4;
    }
    return numero - resta;
}

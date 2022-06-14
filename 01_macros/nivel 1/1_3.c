/*
Si un número es par (aquí es útil el operador %, que da el resto de la división entera)
*/

#include <stdio.h>

#define PAR(X) ((X) % 2 == 0)

int main()
{
    int num, a;
    
    printf("Ingresa un numero entero para saber si es par o no: ");
    scanf("%d", &num);
    
    a = PAR(num);
    if (a == 1)
    {
        printf("El numero %d es par", num);
    }
    else
    {
        printf("El numero %d es impar", num);
    }
    return 0;
}

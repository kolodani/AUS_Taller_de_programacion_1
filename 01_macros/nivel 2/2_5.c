/*
Determinar si un número está entre el 0 y el 100  (se puede usar cond1 &&cond2)
*/

#include <stdio.h>

#define ENTRE_0_Y_100(X) ((X)>=0 && (X)<=100)

    int main()
{
    int num, a;
    
    printf("Ingrese un numero para seber si esta entre 0 y 100: \n");
    printf("-> ");
    scanf("%d", &num);
    
    a = ENTRE_0_Y_100(num);
    
    if (a==1)
    {
        printf("el numero %d esta entre 0 y 100\n", num);
    }
    else
    {
        printf("el numero %d no esta entre 0 y 100\n", num);
    }
    return 0;
}

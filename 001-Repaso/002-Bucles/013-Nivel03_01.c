// Muestre el abecedario por pantalla

#include <stdio.h>

int main(int argc, char *argv[])
{
    char minusculas = 'a';
    char mayusculas = 'A';

    printf("El abecedario en minusculas:\n");
    for (int i = 0; i < 26; i++) {
        printf("%c ", minusculas);
        minusculas++;
    }
    printf("\n");

    printf("El abecedario en mayusculas:\n");
    for (int i = 0; i < 26; i++) {
        printf("%c ", mayusculas);
        mayusculas++;
    }
    printf("\n");
    
    return 0;
}

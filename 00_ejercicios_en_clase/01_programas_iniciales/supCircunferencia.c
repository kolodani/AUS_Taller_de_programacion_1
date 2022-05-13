#include <stdio.h>

#define PI 3.141592

int main() {
    int radio=0;

    printf("Ingrese radio de circunferencia: ");
    scanf("%d", &radio);

    printf("Superficie circunferencia: %.3f\n", PI*radio*radio);

    return 0;
}

#include <stdio.h>
//bucles anidados (for)
//nested for

int main() {

    int i, j;

     for (i=1; i<=10; i++) {   //outer most
         for(j=1; j<=10; j++) { //inner most
            printf("*");
        }
        printf("\n");
    }


    return 0;
}

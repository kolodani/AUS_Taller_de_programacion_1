#include <stdio.h>
#define N 10

int main() {
    int a[N];   //memoria ocupa 10*sizeof(int)
    // 0                 9
    //[10, , , , , , , , , ]
    a[0]=10;
    int i;
    for (i=1; i<N; i++) {
        a[i] = a[0];
    }

    for(i=0; i<N; i++) {
        printf("%d ", a[i]);
    }





    return 0;
}

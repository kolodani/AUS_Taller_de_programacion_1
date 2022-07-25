#include <stdio.h>

int main()
{
    char c = 'a';
    short int i;
    int j;
    long int k;
    float f;
    double d;
    long double ld;
    long long int ll;
    unsigned char uc;
    unsigned short int usi;
    unsigned int ui;
    unsigned long int ul;
    unsigned long long int ull;
    
    printf("el tamaño de char es %d\n", sizeof(c));
    printf("el tamaño de short int es %d\n", sizeof(i));
    printf("el tamaño de int es %d\n", sizeof(j));
    printf("el tamaño de long int es %d\n", sizeof(k));
    printf("el tamaño de float es %d\n", sizeof(f));
    printf("el tamaño de double es %d\n", sizeof(d));

    return 0;
}

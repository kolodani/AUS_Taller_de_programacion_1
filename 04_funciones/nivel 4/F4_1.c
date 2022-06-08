/*
Crear las siguientes funciones recursivas
suma(a, b) = a + b
prod(a, b) = a * b
exp(a, b) = ab 
factorial(n) = n!
fib(n) = n - ésimo término de la sucesión de Fibonacci(1, 2, 3, 5, 8, 13, 21, 34, 55,…)
*/

#include <stdio.h>
int suma (int , int);
int prod (int , int, int);
int exponente (int , int, int);
int factorial (int, int);
int fib (int, int, int);

int main()
{
    int a, b, d, e, facto = 1, fibo = 1, fibo2 = 0;
    printf("Ingrese el primer numero:\n");
    printf("> ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero:\n");
    printf("> ");
    scanf("%d", &b);
    
    suma (a, b);
    int c = a;
    prod (a, b, c);
    exponente(a, b, c);
    
    printf("ingrese un numero para calcular su factorial:\n");
    printf("> ");
    scanf("%d", &d);
    factorial(d, facto);
    
    printf("ingrese un numero para calcular su fibonacci:\n");
    printf("> ");
    scanf("%d", &e);
    fib(e, fibo, fibo2);
    return 0;
}

int suma (int a, int b)
{
    if (b == 0)
    {
        printf("suma recursiva: %d\n", a);
    }
    else
    {
        suma (a + 1, b - 1);
    }
}

int prod (int a, int b, int c)
{
    if (b == 1)
    {
        printf("producto recursivo: %d\n", a);
    }
    else
    {
        prod (a + c, b - 1, c);
    }
}

int exponente(int a, int b, int c)
{
    if (b == 0)
    {
        printf("exponente recursivo: %d\n", a);
    }
    else
    {
        exponente(a * c, b - 1, c);
    }
}

int factorial (int d, int facto)
{
    if (d == 1)
    {
        printf("factorial recursivo: %d\n", facto);
    }
    else
    {
        facto = facto * d;
        factorial(d - 1, facto);
    }
}

int fib (int e, int fibo, int fibo2)
{
    printf("fibonacci recursivo:\n");
    if (e == 1)
    {
        printf("%d\n", fibo);
    }
    else
    {
        printf("%d\n", fibo);
        fib(e - 1, fibo + fibo2, fibo);
    }
}
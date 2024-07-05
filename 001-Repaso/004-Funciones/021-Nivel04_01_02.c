// Crear las siguientes funciones recursivas
// suma(a, b) = a + b
// prod(a, b) = a * b
// exp(a, b) = a^b
// factorial(n) = n!
// fib(n) = n - ésimo término de la sucesión de Fibonacci(1, 2, 3, 5, 8, 13, 21, 35, 55, ...)

#include <stdio.h>

int menu();
int setValor();
int suma(int, int);
int prod(int, int);
int exponente(int, int);
int factorial(int);
int fib(int);

int main(int argc, char const *argv[])
{
    int opcion, numA, numB, resultado;
    do
    {
        opcion = menu();
        switch (opcion)
        {
        case 1:
            printf("Ingrese los dos numeros a sumar:\n");
            numA = setValor();
            numB = setValor();
            resultado = suma(numA, numB);
            printf("La Suma: %d + %d = %d\n", numA, numB, resultado);
            break;
        case 2:
            printf("Ingrese los dos numeros a multiplicar:\n");
            numA = setValor();
            numB = setValor();
            resultado = prod(numA, numB);
            printf("El Producto: %d x %d = %d\n", numA, numB, resultado);
            break;
        case 3:
            printf("Ingrese los dos numeros (X^Y) a potenciar:\n");
            numA = setValor();
            numB = setValor();
            resultado = exponente(numA, numB);
            printf("La potencia: %d ^ %d = %d\n", numA, numB, resultado);
            break;
        case 4:
            printf("Ingrese un numero para el factorial:\n");
            numA = setValor();
            resultado = factorial(numA);
            printf("La Suma: %d! = %d\n", numA, resultado);
            break;
        case 5:
            printf("Ingrese un numero para fibonacci:\n");
            numA = setValor();
            resultado = fib(numA);
            printf("Fibonacci de %d = %d\n", numA, resultado);
            break;
        case 0:
            printf("Fin del programa.\n");
            break;
        default:
            printf("Opcion invalida = %d.\n", opcion);
            break;
        }
    } while (opcion != 0);

    return 0;
}

int menu()
{
    int res;
    printf("Menu principal, elija un opcion valida:\n");
    printf("1) Suma.\n");
    printf("2) Producto.\n");
    printf("3) Exponencial.\n");
    printf("4) Factorial.\n");
    printf("5) fibonacci.\n");
    printf("0) Salir.\n");
    printf("> ");
    scanf("%d", &res);
    return res;
}

int setValor()
{
    int a;
    do
    {
        printf("Valor:\n");
        printf("> ");
        scanf("%d", &a);
    } while (a < 1);
    printf("Valor Correcto.\n");
    return a;
}

int suma(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        suma(a + 1, b - 1);
    }
}

int prod(int a, int b)
{
    if (b == 1)
    {
        return a;
    }
    else
    {
        a += a + prod(a, b - 1);
    }
}

int exponente(int a, int b)
{
    if (b == 1)
    {
        return a;
    }
    else
    {
        a = a * exponente(a, b - 1);
    }
}

int factorial(int a)
{
    if (a == 1)
    {
        return a;
    }
    else
    {
        a = a * factorial(a - 1);
    }
}

int fib(int a)
{
    static int fibo = 1;
    static int fibo2 = 2;
    int aux = fibo + fibo2;
    fibo = fibo2;
    fibo2 = aux;
    if (a > 2)
    {
        fib(a - 1);
    }
    else
    {
        return fibo;
    }
}

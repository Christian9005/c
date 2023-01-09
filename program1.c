// Online C compiler to run C program online
#include <stdio.h>

float suma(float a, float b)
{
    return a + b;
}

float resta(float a, float b)
{
    return a - b;
}

float multiplicacion(float a, float b)
{
    return a * b;
}

float division(float a, float b)
{
    return a / b;
}

int residuo(int a, int b)
{
    return a % b;
}

int main()
{
    char str[3];
    char a[2], b[2];
    int n1 = 0, n2 = 0;
    gets(str);

    a[0] = str[0];
    b[0] = str[2];

    n1 = atoi(a);
    n2 = atoi(b);

    printf("\nSuma: %.2f, Resta: %.2f, Multiplicacion: %.2f, Division: %.2f, Residuo: %d\n", suma(n1, n2), resta(n1, n2), multiplicacion(n1, n2), division(n1, n2), residuo(n1, n2));

    return 0;
}
#include <stdlib.h>
#include <stdio.h>

int add(int a, int b)
{
        int result;
        result = a + b;
        printf("%d\n", result);
}

int sub(int a, int b)
{
        int result;
        result = a - b;
        printf("%d\n", result);
}

int mul(int a, int b)
{
        int result;
        result = a * b;
        printf("%d\n", result);
}

div_t div(int a, int b)
{
        double result;
        result = a/b;
        printf("%f\n", result);
}

int mod(int a, int b)
{
        int result;
        result = a % b;
        printf("%d\n", result);
}

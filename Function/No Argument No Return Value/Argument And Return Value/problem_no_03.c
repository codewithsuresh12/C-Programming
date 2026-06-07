// Q.3 WAP to find multiplication of two numbers.

#include <stdio.h>

int multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int x, y;

    scanf("%d%d", &x, &y);

    printf("Product = %d", multiply(x, y));

    return 0;
}
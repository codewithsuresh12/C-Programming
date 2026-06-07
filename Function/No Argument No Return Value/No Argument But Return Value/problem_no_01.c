// Q.1 WAP to find sum of two numbers using function with no arguments but return value.

#include <stdio.h>

int sum()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    return a + b;
}

int main()
{
    int result;

    result = sum();

    printf("Sum = %d", result);

    return 0;
}
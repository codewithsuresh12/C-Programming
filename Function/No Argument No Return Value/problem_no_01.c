// Q.1 WAP to find sum of two numbers using function with no arguments and no return value.

#include <stdio.h>

void sum()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d", a + b);
}

int main()
{
    sum();

    return 0;
}
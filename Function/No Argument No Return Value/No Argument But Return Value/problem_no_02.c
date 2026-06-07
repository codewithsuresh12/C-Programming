// Q.2 WAP to find square of a number using function with no arguments but return value.

#include <stdio.h>

int square()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    return n * n;
}

int main()
{
    int result;

    result = square();

    printf("Square = %d", result);

    return 0;
}
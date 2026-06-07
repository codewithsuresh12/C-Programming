// Q.2 WAP to find square of a number using function with no arguments and no return value.

#include <stdio.h>

void square()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Square = %d", n * n);
}

int main()
{
    square();

    return 0;
}
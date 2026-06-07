// Q.3 WAP to find factorial of a number using function with no arguments but return value.

#include <stdio.h>

int factorial()
{
    int n, i, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int result;

    result = factorial();

    printf("Factorial = %d", result);

    return 0;
}
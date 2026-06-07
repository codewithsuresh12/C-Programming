// Q.4 WAP to find factorial of a number using function with no arguments and no return value.

#include <stdio.h>

void factorial()
{
    int n, i, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %d", fact);
}

int main()
{
    factorial();

    return 0;
}
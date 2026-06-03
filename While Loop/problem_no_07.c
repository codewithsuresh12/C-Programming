// Q7: Write a program to calculate factorial of a number using while loop.
#include <stdio.h>

int main()
{
    int n, i = 1;
    long long fact = 1;

    printf("Enter Number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        fact *= i;
        i++;
    }

    printf("Factorial = %lld", fact);

    return 0;
}
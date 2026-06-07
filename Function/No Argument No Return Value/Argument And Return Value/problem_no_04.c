// Q.4 WAP to check whether a number is even or odd.

#include <stdio.h>

int evenOdd(int n)
{
    return n % 2 == 0;
}

int main()
{
    int n;

    scanf("%d", &n);

    if (evenOdd(n))
        printf("Even Number");
    else
        printf("Odd Number");

    return 0;
}
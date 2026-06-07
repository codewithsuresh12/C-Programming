// Q.5 WAP to find square of a number.

#include <stdio.h>

int square(int n)
{
    return n * n;
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("Square = %d", square(n));

    return 0;
}
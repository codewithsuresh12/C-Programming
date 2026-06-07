// Q.6 WAP to find cube of a number.

#include <stdio.h>

int cube(int n)
{
    return n * n * n;
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("Cube = %d", cube(n));

    return 0;
}
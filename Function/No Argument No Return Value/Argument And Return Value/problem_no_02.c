// Q.2 WAP to find subtraction of two numbers.

#include <stdio.h>

int subtract(int a, int b)
{
    return a - b;
}

int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    printf("Difference = %d", subtract(x, y));

    return 0;
}
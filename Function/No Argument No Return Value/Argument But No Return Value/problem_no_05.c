// Q.5 WAP to find the largest among three numbers using function with arguments but no return value.

#include <stdio.h>

void largest(int a, int b, int c)
{
    if (a >= b && a >= c)
        printf("Largest Number = %d", a);
    else if (b >= c)
        printf("Largest Number = %d", b);
    else
        printf("Largest Number = %d", c);
}

int main()
{
    int x, y, z;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &x, &y, &z);

    largest(x, y, z);

    return 0;
}
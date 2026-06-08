// Q2. Addition of Two Numbers Using Pointers
#include <stdio.h>

int main()
{
    int a, b;
    int *p1 = &a, *p2 = &b;

    printf("Enter two numbers: ");
    scanf("%d %d", p1, p2);

    printf("Sum = %d", *p1 + *p2);

    return 0;
}
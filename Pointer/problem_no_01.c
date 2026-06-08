// Q1. Swap Two Numbers Using Pointers
#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int *p1 = &a, *p2 = &b;
    int temp;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("a = %d\n", *p1);
    printf("b = %d\n", *p2);

    return 0;
}
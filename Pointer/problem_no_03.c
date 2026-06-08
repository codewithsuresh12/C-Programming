// Q3. Find Largest Number Using Pointers
#include <stdio.h>

int main()
{
    int a, b;
    int *p1 = &a, *p2 = &b;

    printf("Enter two numbers: ");
    scanf("%d %d", p1, p2);

    if (*p1 > *p2)
        printf("Largest = %d", *p1);
    else
        printf("Largest = %d", *p2);

    return 0;
}
// Q.6 WAP to reverse a number using function with no arguments and no return value.

#include <stdio.h>

void reverse()
{
    int n, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    printf("Reverse Number = %d", rev);
}

int main()
{
    reverse();

    return 0;
}
// Q.3 WAP to check whether a number is even or odd using function with no arguments and no return value.

#include <stdio.h>

void evenOdd()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("Even Number");
    else
        printf("Odd Number");
}

int main()
{
    evenOdd();

    return 0;
}
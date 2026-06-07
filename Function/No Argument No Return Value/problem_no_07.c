// Q.7 WAP to check whether a number is palindrome or not using function with no arguments and no return value.

#include <stdio.h>

void palindrome()
{
    int n, temp, rem, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (temp == rev)
        printf("Palindrome Number");
    else
        printf("Not Palindrome Number");
}

int main()
{
    palindrome();

    return 0;
}
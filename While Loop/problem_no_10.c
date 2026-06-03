// Q10: Write a program to check whether a number is palindrome or not using while loop.
#include <stdio.h>

int main()
{
    int num, original, reverse = 0, rem;

    printf("Enter Number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }

    if (original == reverse)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}
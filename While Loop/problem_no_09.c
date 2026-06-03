// Q9: Write a program to count digits in a number using while loop.
#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter Number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        count++;
        num = num / 10;
    }

    printf("Total Digits = %d", count);

    return 0;
}
// Q6: Write a program to print multiplication table of a number using while loop.
#include <stdio.h>

int main()
{
    int num, i = 1;

    printf("Enter Number: ");
    scanf("%d", &num);

    while (i <= 10)
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    return 0;
}
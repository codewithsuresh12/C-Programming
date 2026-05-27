// 22.WAP to check if a 3-digit number is palindrome or not. Ex: 121 → Yes
#include <stdio.h>
int main()
{
    int d1, d2, d3, num, palin;

    printf("Enter the 3 digit number :");
    scanf("%d", &num);

    d1 = (num % 10);
    d2 = (num / 10) % 10;
    d3 = (num / 100);

    printf("The reverse is %d%d%d\n", d1, d2, d3);

    if (d1 == d3)
    {
        printf("The your number is palindrome.\n");
    }
    else
    {
        printf("The your number is not a palindrome.\n");
    }
    return 0;
}
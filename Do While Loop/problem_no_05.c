// 5. WAP to Reverse a Number using do-while loop
#include <stdio.h>

int main()
{
    int num, rem, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    do
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    } while (num != 0);

    printf("Reverse Number = %d", reverse);

    return 0;
}
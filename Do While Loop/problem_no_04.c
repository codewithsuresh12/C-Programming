// 4. WAP to Count Digits in a Number using do-while loop
#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    do
    {
        count++;
        num = num / 10;
    } while (num != 0);

    printf("Total Digits = %d", count);

    return 0;
}
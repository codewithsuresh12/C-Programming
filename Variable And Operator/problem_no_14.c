// 14.	WAP to remove last digit of a number. Example: 1234 → 123
#include <stdio.h>
int main()
{
    int num, lastdigit;

    printf("Enter the number :");
    scanf("%d", &num);

    lastdigit = num / 10;

    printf("The number is %d ", lastdigit);

    return 0;
}
// 21.WAP to reverse a 4-digit number without using loop. Ex: 1234 → 4321
#include <stdio.h>
int main()
{
    int d1, d2, d3, d4, num;

    printf("Enter the 4 digit number :");
    scanf("%d", &num);

    d1 = (num % 10);
    d2 = (num / 10) % 10;
    d3 = (num / 100) % 10;
    d4 = (num / 1000);

    printf("The revres is %d%d%d%d", d1, d2, d3, d4);

    return 0;
}
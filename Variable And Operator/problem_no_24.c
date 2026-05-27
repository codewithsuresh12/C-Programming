// 24.	WAP to swap first and last digit of a 4-digit number. Ex: 1234 → 4231
#include <stdio.h>
int main()
{
    int num, d1, d2, d3, d4;

    printf("Enter the 4 digit number :");
    scanf("%d", &num);

    d1 = (num % 10);
    d4 = (num / 1000);
    d2 = (num / 100) % 10; // for storing 2nd digit
    d3 = (num / 10) % 10;  // for storing 3rd digit

    printf("After swapping 1st and last digit value will be %d%d%d%d\n", d1, d2, d3, d4);

    return 0;
}
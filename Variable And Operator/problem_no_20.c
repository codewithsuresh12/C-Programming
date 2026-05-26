// 20.	WAP to input a 5-digit number and find sum of all digits. Ex: 12345 → 15
#include <stdio.h>
int main()
{
    int d1, d2, d3, d4, d5, num, sum;

    printf("Enter the 5 digit number :");
    scanf("%d", &num);

    d1 = num / 10000;       // 1st digit
    d2 = (num / 1000) % 10; // 2nd digit
    d3 = (num / 100) % 10;  // 3rd digit
    d4 = (num / 10) % 10;   // 4th digit
    d5 = (num % 10);        // last digit

    sum = d1 + d2 + d3 + d4 + d5;

    printf("The sum of 5 digit is %d", sum);
    return 0;
}
// 16.	WAP to multiply a number by 2 without using * operator. Hint: Left shift
#include <stdio.h>
int main()
{
    int num, result;

    printf("Enter the number :");
    scanf("%d", &num);

    result = num << 1; // left shit by 1 = multiply by 2

    printf("The value %d is after multiply a number by 2.", result);

    return 0;
}
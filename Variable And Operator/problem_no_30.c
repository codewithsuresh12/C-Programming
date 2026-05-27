// 30.	WAP to add 2 numbers using bitwise operators only. No +, -, _, / allowed.
#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0)
    {
        int sum = a ^ b;          // sum without carry
        int carry = (a & b) << 1; // carry bits
        a = sum;
        b = carry;
    }

    printf("Sum = %d", a);

    return 0;
}

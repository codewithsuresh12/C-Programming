// 29.	WAP to toggle a number's nth bit using XOR. Input number and bit position from user.
#include <stdio.h>

int main()
{
    int num, n, result;

    printf("Enter number: ");
    scanf("%d", &num);
    printf("Enter bit position to toggle: ");
    scanf("%d", &n);

    result = num ^ (1 << n); // Toggle nth bit using XOR

    printf("Before: %d\n", num);
    printf("After toggling bit %d: %d", n, result);

    return 0;
}
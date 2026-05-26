// 15.	WAP to add 2 numbers without using + operator. Hint: Use -(-a-b)
#include <stdio.h>
int main()
{
    int a, b, add;

    printf("Enter the value of a and b :");
    scanf("%d %d", &a, &b);

    add = -(-a - b);

    printf("The addition is %d ", add);
    return 0;
}
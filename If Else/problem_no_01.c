// 1. Even/Odd check: User se number lo, batao even hai ya odd
#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number :");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("The %d Even ", num);
    }
    else
    {
        printf("The %d Odd ", num);
    }

    return 0;
}
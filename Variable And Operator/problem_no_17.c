// 17.	WAP to check if a number is positive, negative or zero using nested ternary.
#include <stdio.h>
int main()
{
    int num;

    printf("Enter the number :");
    scanf("%d", &num);

    ((num > 0) ? printf("The %d is positive\n", num) : (num < 0) ? printf("The %d is negative\n", num)
                                                                 : printf("The %d is zero\n", num));
    return 0;
}
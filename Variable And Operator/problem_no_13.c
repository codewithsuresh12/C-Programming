// 13.	WAP to print last digit of a number. Example: 1234 → 4
#include <stdio.h>
int main()
{
    int num, ans;

    printf("Enter the number :");
    scanf("%d", &num);

    ans = num % 10;

    printf("The Anwer is %d", ans);
    return 0;
}
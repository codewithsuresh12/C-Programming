// 8.	WAP to check even/odd using bitwise & operator without %. Hint: n & 1
#include <stdio.h>
int main()
{
    int num;

    printf("Enter the number :");
    scanf("%d", &num);

    if (num & 1)
    {
        printf("The %d is odd ", num);
    }
    else
    {
        printf("The %d is even ", num);
    }
    return 0;
}
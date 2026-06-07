// Q.4 WAP to check whether a number is prime or not using function with arguments but no return value.

#include <stdio.h>

void prime(int n)
{
    int i, flag = 0;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Prime Number");
    else
        printf("Not Prime Number");
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    prime(num);

    return 0;
}
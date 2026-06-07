// Q.5 WAP to check whether a number is prime or not using function with no arguments and no return value.

#include <stdio.h>

void prime()
{
    int n, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

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
    prime();

    return 0;
}
// 5. Divisible by 5: Number 5 se divide hota hai ya nahi
#include <stdio.h>
int main()
{
    int num;

    printf("Enter the number :");
    scanf("%d", &num);

    if (num % 5 == 0)
    {
        printf("The %d is divisible by 5 \n", num);
    }
    else
    {
        printf("The %d is not a divisible by 5 \n", num);
    }
    return 0;
}
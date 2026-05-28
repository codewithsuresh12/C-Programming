// 2. Positive/Negative/Zero: Number checking program
#include <stdio.h>
int main()
{
    int num;

    printf("Enter the number :");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("The %d positive \n", num);
    }
    else if (num < 0)
    {
        printf("The %d negative \n", num);
    }
    else
    {
        printf("The %d is zero\n", num);
    }
    return 0;
}
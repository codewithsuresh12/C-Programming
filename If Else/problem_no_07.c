// 7.Triangle Valid: 3 angles input, sum = 180 hai to valid triangle
#include <stdio.h>
int main()
{
    int a, b, c, sum;

    printf("Enter the angle a :");
    scanf("%d", &a);

    printf("Enter the angle b :");
    scanf("%d", &b);

    printf("Enter the angle c :");
    scanf("%d", &c);

    sum = a + b + c;

    if (sum == 180)
    {
        printf("The sum of all angle is 180 so it is Valid triangle \n");
    }
    else
    {
        printf("The sum of all angle is not 180 so it is a  unvalid triangle \n");
    }
    return 0;
}
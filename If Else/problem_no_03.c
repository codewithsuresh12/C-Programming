// 3. Voting Eligibility: Age input lo, 18+ hai to eligible
#include <stdio.h>
int main()
{
    int by, cy, age;

    printf("Enter the birth year :");
    scanf("%d", &by);

    printf("Enter the current year :");
    scanf("%d", &cy);

    age = cy - by;

    printf("The Age is %d \n\n\n", age);
    if (age >= 18)
    {
        printf("The Person Eligibale for voting \n");
    }
    else
    {
        printf("The Person Not Eligibale for voting \n");
    }
    return 0;
}
// 2.. Driving License: Age >=18 aur Test pass hai to license milega. Dono condition check karo
#include <stdio.h>

int main()
{
    int age, test; // test = 1 for Pass, 0 for Fail

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Did you pass the driving test? 1 for Yes, 0 for No: ");
    scanf("%d", &test);

    if (age >= 18)
    {
        if (test == 1)
        {
            printf("Congratulations! You are eligible for Driving License\n");
        }
        else
        {
            printf("Age is OK but you failed the driving test. Try again\n");
        }
    }
    else
    {
        printf("Sorry! You are under 18. Not eligible\n");
    }

    return 0;
}
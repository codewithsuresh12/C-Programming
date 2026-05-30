// 2. print the all even number from 1 to 100
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("The %d is even\n", i);
        }
    }
    return 0;
}
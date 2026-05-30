// 4. print the n number is even or odd
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 50; i++)
    {
        if (i % 2 == 0)
        {
            printf("The %d is even\n", i);
        }
        else
        {
            printf("The %d is odd\n", i);
        }
    }
    return 0;
}

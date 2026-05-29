// 1.Youngest of 3: Ram, Shyam, Ajay ki age input. Sabse chota kon
#include <stdio.h>
int main()
{
    int ram, shyam, ajay;

    printf("Enter the age of ram :");
    scanf("%d", &ram);

    printf("Enter the age of shyam :");
    scanf("%d", &shyam);

    printf("Enter the age of ajay :");
    scanf("%d", &ajay);

    if (ram < shyam)
    {
        if (ram < ajay)
        {
            printf("Ram is youngest. Age = %d\n", ram);
        }
        else
        {
            printf("Ajay is youngest. Age = %d\n", ajay);
        }
    }
    else
    {
        if (shyam < ajay)
        {
            printf("Shyam is youngest. Age = %d\n", shyam);
        }
        else
        {
            printf("Ajay is youngest. Age = %d\n", ajay);
        }
    }

    return 0;
}
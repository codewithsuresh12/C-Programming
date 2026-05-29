// 7.Temperature State: Temp input. <0 = Freezing, 0-10 = Very Cold, 10-20 = Cold, 20-30 = Normal, 30-40 = Hot, >40 = Very Hot
#include <stdio.h>

int main()
{
    float temp;

    printf("Enter Temperature in Celsius: ");
    scanf("%f", &temp);

    if (temp < 0)
    {
        printf("Freezing\n");
    }
    else
    {
        if (temp <= 10)
        {
            printf("Very Cold\n");
        }
        else
        {
            if (temp <= 20)
            {
                printf("Cold\n");
            }
            else
            {
                if (temp <= 30)
                {
                    printf("Normal\n");
                }
                else
                {
                    if (temp <= 40)
                    {
                        printf("Hot\n");
                    }
                    else
                    {
                        printf("Very Hot\n");
                    }
                }
            }
        }
    }

    return 0;
}
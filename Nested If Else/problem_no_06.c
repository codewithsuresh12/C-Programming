// 6.. Date Valid: DD MM YYYY input. Check date valid hai ya nahi. Feb me leap year ka dhyan rakhna
#include <stdio.h>

int main()
{
    int dd, mm, yyyy, maxDays = 0, isLeap = 0, isValid = 0;

    printf("Enter Date DD MM YYYY: ");
    scanf("%d %d %d", &dd, &mm, &yyyy);

    if (yyyy >= 1)
    {
        if (yyyy % 400 == 0)
        {
            isLeap = 1;
        }
        else
        {
            if (yyyy % 100 == 0)
            {
                isLeap = 0;
            }
            else
            {
                if (yyyy % 4 == 0)
                {
                    isLeap = 1;
                }
                else
                {
                    isLeap = 0;
                }
            }
        }

        if (mm >= 1)
        {
            if (mm <= 12)
            {
                if (mm == 2)
                {
                    if (isLeap == 1)
                    {
                        maxDays = 29;
                    }
                    else
                    {
                        maxDays = 28;
                    }
                }
                else
                {
                    if (mm == 4)
                    {
                        maxDays = 30;
                    }
                    else
                    {
                        if (mm == 6)
                        {
                            maxDays = 30;
                        }
                        else
                        {
                            if (mm == 9)
                            {
                                maxDays = 30;
                            }
                            else
                            {
                                if (mm == 11)
                                {
                                    maxDays = 30;
                                }
                                else
                                {
                                    maxDays = 31;
                                }
                            }
                        }
                    }
                }

                if (dd >= 1)
                {
                    if (dd <= maxDays)
                    {
                        isValid = 1;
                    }
                    else
                    {
                        isValid = 0;
                    }
                }
                else
                {
                    isValid = 0;
                }
            }
            else
            {
                isValid = 0;
            }
        }
        else
        {
            isValid = 0;
        }
    }
    else
    {
        isValid = 0;
    }

    if (isValid == 1)
    {
        printf("%02d/%02d/%04d is a Valid Date\n", dd, mm, yyyy);
    }
    else
    {
        printf("%02d/%02d/%04d is Invalid Date\n", dd, mm, yyyy);
    }

    return 0;
}
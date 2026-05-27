// 23.	WAP to convert meter to centimeter, millimeter and kilometer. Take meter as input.
#include <stdio.h>
int main()
{
    int meter;

    printf("Enter the meter :");
    scanf("%d", &meter);

    int cm = (meter * 100);
    int mm = (meter * 1000);
    float km = (meter / 1000);

    printf("%d meter = %d centimeter \n", meter, cm);
    printf("%d meter = %d milimeter \n", meter, mm);
    printf("%d meter = %.3f km \n", meter, km);

    return 0;
}
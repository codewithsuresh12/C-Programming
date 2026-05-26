// 4 . WAP to convert temperature from Celsius to Fahrenheit. Formula: F = C _ 9/5 + 32
#include <stdio.h>
int main()
{
    float cel, f;

    printf("Enter the temperature in celsius :");
    scanf("%f", &cel);

    f = (cel * 9.0 / 5.0) + 32.0;

    printf("The temperature in fahrenheit is %.2f", f);

    return 0;
}
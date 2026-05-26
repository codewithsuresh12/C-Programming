// 6. WAP to find area and circumference of circle. Take radius as input.

#include <stdio.h>
int main()
{
    int radius;
    float pi = 3.1416;
    float area, circumference;

    printf("Enter the radius :");
    scanf("%d", &radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("The area of circle is :%f\n", area);
    printf("The circumference of circle is :%f\n", circumference);

    return 0;
}
// 5 Menu Driven Program: 1.Area of Circle, 2.Area of Rectangle, 3.Area of Triangle, 4.Exit. User choice ke hisab se chalao
#include <stdio.h>

int main()
{
    int choice;
    float radius, length, breadth, base, height, area;

    printf("1.Area of Circle\n");
    printf("2.Area of Rectangle\n");
    printf("3.Area of Triangle\n");
    printf("4.Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter radius: ");
        scanf("%f", &radius);
        area = 3.14159 * radius * radius;
        printf("Area of Circle: %.2f\n", area);
        break;
    case 2:
        printf("Enter length: ");
        scanf("%f", &length);
        printf("Enter breadth: ");
        scanf("%f", &breadth);
        area = length * breadth;
        printf("Area of Rectangle: %.2f\n", area);
        break;
    case 3:
        printf("Enter base: ");
        scanf("%f", &base);
        printf("Enter height: ");
        scanf("%f", &height);
        area = 0.5 * base * height;
        printf("Area of Triangle: %.2f\n", area);
        break;
    case 4:
        printf("Exit\n");
        break;
    default:
        printf("Invalid Choice\n");
    }

    return 0;
}
// 9 Nested Switch Calculator: First switch: 1.Arithmetic 2.Relational. Second switch andar operation choose karo
#include <stdio.h>

int main()
{
    int choice, op;
    float a, b;

    printf("1.Arithmetic\n");
    printf("2.Relational\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);

    switch (choice)
    {
    case 1:
        printf("1.+  2.-  3.*  4./\n");
        printf("Enter operation: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Result: %.2f\n", a + b);
            break;
        case 2:
            printf("Result: %.2f\n", a - b);
            break;
        case 3:
            printf("Result: %.2f\n", a * b);
            break;
        case 4:
            if (b != 0)
                printf("Result: %.2f\n", a / b);
            else
                printf("Division by zero\n");
            break;
        default:
            printf("Invalid Operation\n");
        }
        break;
    case 2:
        printf("1.>  2.<  3.==\n");
        printf("Enter operation: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Result: %d\n", a > b);
            break;
        case 2:
            printf("Result: %d\n", a < b);
            break;
        case 3:
            printf("Result: %d\n", a == b);
            break;
        default:
            printf("Invalid Operation\n");
        }
        break;
    default:
        printf("Invalid Choice\n");
    }

    return 0;
}
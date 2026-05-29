// 3.Simple Calculator: 2 numbers aur operator + - * / input, result do
#include <stdio.h>

int main()
{
    float num1, num2, result;
    char op;

    printf("Enter num1: ");
    scanf("%f", &num1);
    printf("Enter operator + - * / : ");
    scanf(" %c", &op);
    printf("Enter num2: ");
    scanf("%f", &num2);

    switch (op)
    {
    case '+':
        result = num1 + num2;
        printf("Result: %.2f\n", result);
        break;
    case '-':
        result = num1 - num2;
        printf("Result: %.2f\n", result);
        break;
    case '*':
        result = num1 * num2;
        printf("Result: %.2f\n", result);
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("Result: %.2f\n", result);
        }
        else
        {
            printf("Error: Division by zero\n");
        }
        break;
    default:
        printf("Invalid Operator\n");
    }

    return 0;
}
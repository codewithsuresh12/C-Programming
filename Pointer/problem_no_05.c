// Q5. Sum of Array Elements Using Pointer
#include <stdio.h>

int main()
{
    int arr[5], sum = 0;
    int *ptr = arr;

    printf("Enter 5 elements:\n");

    for (int i = 0; i < 5; i++)
        scanf("%d", ptr + i);

    for (int i = 0; i < 5; i++)
        sum += *(ptr + i);

    printf("Sum = %d", sum);

    return 0;
}
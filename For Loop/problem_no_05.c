// 5.print the table of n
#include <stdio.h>
int main()
{
    int i, tableNo;
    printf("Enter the Table Number :");
    scanf("%d", &tableNo);

    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", i * tableNo);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int number;
    printf("Enter number:");
    scanf("%d", &number);
    if (number >= 0)
    {
        printf("positive integer\n");
        if (number % 2 == 0)
        {
            printf("even integer \n");
        }
        else
        {
            printf("odd integer \n");
        }
    }
    else
    {
        printf("negative integer \n");
        if (number % 2 == 0)
        {
            printf("even integer\n");
        }
        else
        {
            printf("odd integer \n");
        }
    }
    return 0;
}
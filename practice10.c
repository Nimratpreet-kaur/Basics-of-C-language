#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your test score:");
    scanf("%f", &marks);
    if (marks >= 30 && marks<= 100)
    {
        printf("PASSED!");
    }
    else if (marks < 30 & marks >= 0)
    {
        printf("FAILED!");
    }
    else
    {
        printf("INVALID SCORE!");
    }
    return 0;
}
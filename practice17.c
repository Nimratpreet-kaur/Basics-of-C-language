#include <stdio.h>
#include <math.h>
int main()
{
    // ques. keep taking number as input from user untill user enters an odd number
    int n;
    do
    {
        printf("Enter a number:\n");
        scanf("%d\n", &n);
        if (n % 2 != 0)
        {
            break;
        }
    } while (1);
    return 0;
}
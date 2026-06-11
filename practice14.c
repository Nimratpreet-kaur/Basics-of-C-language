#include <stdio.h>
#include <math.h>
int main()
{ // ques. print number from 0 to n where n is number given by user
    int i, n;
    i = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d \n", i);
        i++;
    }
    return 0;
}
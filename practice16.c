#include <stdio.h>
#include <math.h>
int main()
{
    // print table of number input by the user
    int n;
    printf("Enter a number: \n");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n", n * i);
    }
    return 0;
}
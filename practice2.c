#include <stdio.h>
int main()
{
    int a, b;
    printf("enter number :");
    scanf("%d", &a);
    printf("enter another number:");
    scanf("%d", &b);
    int sum = a + b;
    printf("sum is %d", sum);
    /*
    we can even skip 9 and 
    write a+b in place of sum in line 10*/
    return 0;
}
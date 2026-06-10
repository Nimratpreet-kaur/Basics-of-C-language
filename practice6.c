#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    // even->1
    // odd->0
    printf(" Enter a number:");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);
    /*
     if x%2==0 that means number is even
    or number is odd
    thus 0 in output means false and number is odd
    1 in output means number is even
    */
    return 0;
}
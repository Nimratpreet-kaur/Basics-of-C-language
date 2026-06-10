#include <stdio.h>
int main()
{
    int a, b, c;
    // first introduce type then assign value
    a = b = c = 1;
    printf("value of a is %d \n", a);
    int x = (int)5.9999;
    printf("%d \n ", x);
    int p, q, r, s;
    p = 5 * 2 / 2 * 3;
    q = 5 * (2 / 2) * 3;
    r = 5 + 2 / 2 * 3;
    printf("%d \n", p);
    printf("%d \n ", q);
    printf("%d \n ", r);
    return 0;
}
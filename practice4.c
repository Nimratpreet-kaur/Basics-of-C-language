#include <stdio.h>
int main()
{
    float radi;
    printf("Enter radius of circle:");
    scanf("%f", &radi);
    float pi = 3.14;
    float area = pi * radi * radi ;
    printf("Area of circle:%f", area);
    return 0;
}
#include <stdio.h>
int main()
{
    int a = (int)1.999;
    printf("%d \n", a);
    int age;
    printf("Enter age:");
    scanf("%d ", &age);
    if (age >= 18)
    {
        printf("Congratulations ! you are an adult and you can vote");
    }
    else if (age < 18 & age >= 13)
    {
        printf("you are a teenager!");
    }
    else
        printf("you are a child");
    return 0;
}

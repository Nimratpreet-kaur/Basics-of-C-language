#include <stdio.h>
int main()
{
    // for(initiation;condition;updation){//do something}
    for (int i = 0; i < 5; i = i + 1)
    {
        printf("hello world \n");
    }
    for (int a; a < 11; a += 1)
    {
        printf("%d \n", a);
    }
    /* i++ means first use value than increment
    ++i means first increment than use
    similar with i-- and --i */
    int b = 1;
    printf("%d \n", b++);
    printf("%d \n", b);
    int c = 5;
    printf("%d \n", ++c);

    for (float i = 1.0; i <= 5.0; i++)
    {
        printf("%f \n", i);
    }
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c\n", ch);
    }

    return 0;
}

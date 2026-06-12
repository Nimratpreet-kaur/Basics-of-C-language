#include <stdio.h>
#include <math.h>
int main()
{
    // ques. print sum of first n natural numbers
    // method 1
    int i, n;
    i = 1;
    printf("Enter a number:");
    scanf("%d", &n);
    int sum;
    sum = n * (n + 1) / 2;
    printf("sum is :%d \n", sum);
    // method 2
    int N;
    printf("Enter a number: \n");
    scanf("%d", &N);
    int sum_ = 0;
    for (int j = 0; j <= N; j++)
    {
        sum_= sum_ + j ;
    }
    printf("sum is %d", sum_);

    return 0;
}
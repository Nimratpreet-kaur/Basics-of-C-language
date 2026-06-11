#include<stdio.h>
#include<math.h>
int main(){
    //ques. print sum of first n natural numbers
    int i,n;
    i=1;
    printf("Enter a number:");
    scanf("%d",&n);
    int sum;
    sum= n*(n+1)/2;
    printf("sum is :%d",sum);
    return 0;

}
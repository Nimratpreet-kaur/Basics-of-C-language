# include<stdio.h>
int main(){
    int age=22;
    int class=10;
    float pi=3.14;
    // this is used to add single line of comment 
    /*
    this is used to add more than 
    one line of comment
    */
    char hastag='#';
    printf("Hello World\n");
    printf("welcome here\n");
 //  \n is used to shift to new line 
 /*
 we use %d if we need to put value of variable storing int value , 
 %f for float,
 %c for character 
 */
    printf("age is %d \n",age );
    printf("class: %d \n",class );
    printf("Value of pi is %f \n",pi);
    printf("sign of hastag is %c \n",hastag);
    return 0;
}
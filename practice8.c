#include <stdio.h>
int main()
{
    printf("Enter day(1-7)");
    // 1-mon 2-tues 3-thurs ....
    int day;
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("MONDAY /n");
        printf("Today is maths class.");
        break;
    case 2:
        printf("TUESDAY /n");
        printf("Today is chemistry class.");
        break;
    case 3:
        printf("WEDNESDAY /n");
        printf("Today is music class.");

        break;
    case 4:
        printf("THURSDAY /n");
        printf("Today is Physics class.");
        break;
    case 5:
        printf("FRIDAY /n");
        printf("Today is chess lesson.");
        break;
    case 6:
        printf("SATURDAY /n");
        printf("WEEKEND HOLIDAY");
        break;
    case 7:
        printf("SUNDAY \n");
        printf("WEEKEND HOLIDAY");
        break;
    default:
        printf("not a valid day");
    }
    return 0;
}
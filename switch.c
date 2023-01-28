#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number 1-7: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Saturday");
        break;
    case 2:
        printf("Sunday");
        break;
    case 3:
        printf("Monday");
        break;
    case 4:
        printf("Tuesday");
        break;
    case 5:
        printf("Wednesday");
        break;
    case 6:
        printf("Thursday");
        break;
    case 7:
        printf("Friday");
        break;

    default:
        printf("You did not typed expected number");
        break;
    }

    switch (num)
    {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        printf("\nWeekday");
        break;
    case 1:
    case 7:
        printf("\nWeekend");
    default:
        break;
    }

    return 0;
}
#include <stdio.h>

int main()
{

    int num = 5;

    if (!(num % 2 == 0))
    {
        printf("inside");
    }
    else
    {
        printf("outside");
    }

    !(num % 3) == 0 ? printf("\ntrue") : printf("\nfalse");

    int result;
    result = 6 > 3 ? 6 : 3;
    printf("\n%d", result);

    return 0;
}
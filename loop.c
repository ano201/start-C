#include <stdio.h>

int main()
{
    int x;
    while (x < 10000)
    {
        x++;
        printf("\n%d Hey", x);
    }

    do
    {
        printf("\n%d Hey", x);
        x++;
    } while (x < 10000);

    for (int i = 1; i < 10000; i = i + 2)
    {
        if (i < 95)
        {
            continue;
        }
        else if (i > 100)
        {
            break;
        }
        else
        {
            printf("\n%d Hey", i);
        }
    }

    return 0;
}
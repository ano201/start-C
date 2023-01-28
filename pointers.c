#include <stdio.h>

int main()
{
    int *ptr;

    int age = 25;
    printf("%p", &age);

    ptr = &age;

    printf("\nAddress: %p", ptr);
    printf("\nValue: %d", *ptr);

    return 0;
}
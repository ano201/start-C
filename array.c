#include <stdio.h>

int main()
{
    int arr1[] = {};
    int arr2[] = {1, 2, 3};
    arr1[0] = arr2[0];
    printf("%d", arr1[0]);

    return 0;
}
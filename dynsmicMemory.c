#include <stdio.h>

int main()
{
    int n = 4;
    int *ptr;

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory cannot be allocated");
    }

    // printf("enter a value: \n");
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", ptr + i);
    // }

    // printf("input Value: \n");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d\n", *(ptr + i));
    // }

    printf("asllocated memory\n");
    for (int i = 0; i < n; i++)
    {
        printf("%p\n", ptr + 1);
    }

    n = 6;

    ptr = realloc(ptr, n * sizeof(int));

    printf("Newly allocated memory\n");
    for (int i = 0; i < n; i++)
    {
        printf("%p\n", ptr + i);
    }

    free(ptr);

    return 0;
}
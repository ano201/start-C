#include <stdio.h>

int main()
{
    FILE *fptr;
    // fptr = fopen("text.txt", "r");
    fptr = fopen("textw.txt", "w");

    fputs("something", fptr);

    // char content[1000];

    // if (fptr != NULL)
    // {
    //     while (fgets(content, 1000, fptr))
    //     {
    //         printf("%s", content);
    //     }
    // }
    // else
    // {
    //     printf("file not opened");
    // }

    fclose(fptr);

    return 0;
}
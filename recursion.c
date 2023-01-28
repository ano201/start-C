#include <stdio.h>

int recursion(int num);

int main()
{
    int numOfUser;
    printf("Enter a int: ");
    scanf("%d", &numOfUser);
    int result = recursion(numOfUser);
    printf("\n%d", result);
    return 0;
}

int recursion(int num)
{
    printf("%d\n", num);
    if (num != 0)
    {
        return num + recursion(num - 1);
    }
    return num;
}
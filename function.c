#include <stdio.h>

int calculate(int num);

void greeting()
{
    printf("good Morningg");
}

int main()
{
    greeting();

    int num;
    printf("\nenter a number: ");
    scanf("%d", &num);
    int result = calculate(num);
    printf("%d", result);

    return 0;
}

int calculate(int number)
{
    int square = number * number;
    return square;
}

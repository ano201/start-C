#include <stdio.h>

typedef struct Person
{
    int age;
    double salary;
} person;

// struct Person
// {
//     int age;
//     double salary;
// };

int main()
{

    person person1;
    person1.age = 30;
    person1.salary = 2123;

    struct Person person2 = {.age = 22, .salary = 45241};

    return 0;
}
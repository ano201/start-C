#include <stdio.h>

int main(){
    int age = 10;
    printf("Age = %d \n", age);

    double number = 12;
    printf("double = %.4lf", number);

    float flnumber = 13;
    printf("\nfloat = %f", flnumber);

    double exp = 5e5;
    printf("\nexp = %.0lf", exp);

    char myName = 'm';
    printf("\nname =  %d", myName);

    printf("\nname =  %zu", sizeof(exp));


    return 0;
}
#include<stdio.h>

int main() {
    // Age variables
    int age = 22;
    int oldAge = age;
    int newAge = oldAge + 2;
    printf("New age is: %d\n", newAge);

    // Currency variables
    int rupee = 1;
    int dollar = 74;
    printf("1 Rupee equals %d Dollars\n", dollar);

    // Correct declaration order example
    float rad = 3.0;  // Declaring radius first
    float pi = 3.14;  // Declaring pi
    float area = pi * rad * rad;  // Calculating area
    printf("Area of circle: %.2f\n", area);

    // Valid multiple assignment
    int age1, age2, age3;
    age1 = age2 = age3 = 22;
    printf("Ages are: %d, %d, %d\n", age1, age2, age3);

    // Commenting out invalid declaration
    // Invalid: Variables must be declared first
    // int a1 = a2 = a3 = 22;
    // order of declaration is important

    return 0;
}

#include <stdio.h>

int main() {
    int age;
    
    // Prompt the user for their age
    printf("Enter age: ");
    scanf("%d", &age);
    
    // Ternary operator to check if the user is an adult
    age > 18 ? printf("You are an adult.\n") : printf("You are not an adult.\n");

    // Declare and initialize number and luckyNumber
    int number = 7;
    int luckyNumber = 7;

    // Ternary operator to check if the number is the lucky number
    number == luckyNumber ? printf("You are lucky!\n") : printf("You are not lucky.\n");

    return 0;  // Indicate successful execution
}

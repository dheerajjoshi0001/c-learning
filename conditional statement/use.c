#include <stdio.h>

int main() {
    int age;  // Declare a variable to hold the user's age

    // Prompt the user to enter their age
    printf("Enter age: ");
    scanf("%d", &age);  // Read input from the user

    // Determine and print the age group
    if (age < 12) {
        printf("You are a child.\n");
    } 
    else if (age < 18) {
        printf("You are a teenager.\n");
    } 
    else {
        printf("You are an adult.\n");
    }

    return 0;  // Return 0 to indicate successful program execution
}

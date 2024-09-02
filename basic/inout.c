#include <stdio.h>  // Preprocessor directive "header"

int main() {
    // Print static messages and variable values
    printf("hello world\n");  // Print a hello world message

    int age = 22;   // Declare an integer variable `age`
    printf("Your age is: %d\n", age);  // Print the integer value of age

    float pi = 3.14159;  // Declare and initialize the float variable `pi`
    printf("The value of Pi is: %f\n", pi);  // Print the float value

    char star = '*';  // Declare a char variable and assign it the value '*'
    printf("The value of star is: %c\n", star);  // Print the char value

    // Prompt the user to enter their age
    printf("Please enter your age: ");
    
    // Read the user's input and store it in the variable `age`
    scanf("%d", &age);
    
    // Print the entered age
    printf("Your age is: %d\n", age);

    return 0;  // Ending statement
}

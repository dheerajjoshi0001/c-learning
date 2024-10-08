#include <stdio.h>

int main() {
    int number;  // Declare variable to hold the number

    // Prompt the user for input
    printf("Enter a number: ");
    scanf("%d", &number);  // Read input from the user

    // Check if the number is even or odd
    if (number % 2 == 0) {
        printf("%d is even.\n", number);  // Output message for even numbers
    } 
    else {
        printf("%d is odd.\n", number);   // Output message for odd numbers
    }

    return 0;  // Return 0 to indicate successful program termination
}

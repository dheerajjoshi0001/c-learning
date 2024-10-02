#include<stdio.h>

int main() {
    // Variable initialization
    int a = 1, b = 2, c = 3;

    // Valid operation: Assign the result of b + c to a
    a = b + c;
    printf("Value of a after a = b + c: %d\n", a); // a will be 5 it is a valid operation

    // b + c = a 
    // Invalid operation (commented out because it doesn't make sense):
    // You cannot assign a value to an expression like b + c.
    // b + c = a; // This is not a valid statement

    // Demonstrating the modulus operator with positive and negative numbers
    printf("3 %% 2 = %d\n", 3 % 2);    // Output: 1 (remainder of 3 divided by 2)
    printf("-3 %% 2 = %d\n", -3 % 2);  // Output: -1 (remainder of -3 divided by 2)

    return 0;
}



// --------------------------------------------type comversion-----------------------------------------------------

#include <stdio.h>

int main() {
    // Using proper data types and format specifiers for each calculation
    int int_sum = 2 + 3;
    float mixed_sum = 2.0 + 3;  // Implicit conversion to float for consistent output
    float float_sum = 2.0 + 3.0;

    // Print the results with clear explanations
    printf("Sum of 2 and 3 (int + int) : %d\n", int_sum);
    printf("Sum of 2.0 and 3 (float + int, promoted to float): %.2f\n", mixed_sum);
    printf("Sum of 2.0 and 3.0 (float + float): %.2f\n", float_sum);

    return 0;  // Indicating successful program termination
}

// -------------------------------------associativity--------------------------------------------------

#include <stdio.h>

int main() {
    // Explanation: The expression will be evaluated following operator precedence
    // Division and multiplication have higher precedence than addition.
    // 2/2 = 1, 1*3 = 3, and 5 + 3 = 8.
    
    int result = 5 + 2 / 2 * 3; // The expression follows operator precedence rules.
    
    // Print the result with a clear description
    printf("Output: %d\n", result);

    return 0;  // Indicating successful program termination
}

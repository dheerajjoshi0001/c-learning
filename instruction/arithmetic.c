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

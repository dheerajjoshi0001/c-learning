#include <stdio.h>

int main() {
    // Declaring and initializing variables
    int number = 42;
    char star = '*';
    int age = 22;
    float pi = 3.14;

    // The value of variables can be changed
    // age = 24;

    // Demonstrating that C is case-sensitive
    int a = 20;
    int A = 30; // 'a' and 'A' are different variables

    // Variable naming conventions
    int final_score = 100;  // Underscore is necessary between words, no blank space allowed
    int _age = 22;          // Variable names can start with an alphabet or underscore '_'

    
        printf("Number: %d\n", number);
        printf("Star: %c\n", star);
        printf("Age: %d\n", age);
        printf("Pi: %.2f\n", pi);
        printf("Final Score: %d\n", final_score);

    return 0;

}


#include <stdio.h>

int main() {
    // Logical comparison outputs: 1 for true, 0 for false
    
    // Equality and inequality checks
    printf("4 == 4: %d\n", 4 == 4);      // True (1)
    printf("4 != 4: %d\n", 4 != 4);      // False (0)
    printf("3 != 4: %d\n", 3 != 4);      // True (1)

    // Less than and less than or equal to checks
    printf("4 < 3: %d\n", 4 < 3);        // False (0)
    printf("3 < 4: %d\n", 3 < 4);        // True (1)
    printf("4 < 4: %d\n", 4 < 4);        // False (0)
    printf("4 <= 4: %d\n", 4 <= 4);      // True (1)

    // Greater than and greater than or equal to checks
    printf("4 > 3: %d\n", 4 > 3);        // True (1)
    printf("3 > 4: %d\n", 3 > 4);        // False (0)
    printf("4 > 4: %d\n", 4 > 4);        // False (0)
    printf("4 >= 4: %d\n", 4 >= 4);      // True (1)

    return 0;  // Indicating successful program termination
}

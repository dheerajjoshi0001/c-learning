#include<stdio.h>

int main() {
    // Using variables for comparison results to avoid redundant comparisons
    int result1 = (3 < 4 && 3 < 5);   // Both conditions are true
    int result2 = (3 < 4 && 5 < 4);   // Second condition is false
    int result3 = (3 > 4 && 5 > 4);   // First condition is false
    int result4 = !(3 < 4 && 3 < 5);  // Negation of first result
    int result5 = !(4 < 3 || 5 < 3);  // Negation of an OR operation, both conditions false
    
    // Printing the results
    printf("%d \n", result1);  // 1
    printf("%d \n", result2);  // 0
    printf("%d \n", result3);  // 0
    printf("%d \n", result1);  // 1 (reused result1 instead of repeating the comparison)
    printf("%d \n", result4);  // 0
    printf("%d \n", result5);  // 1
    
    return 0;
}

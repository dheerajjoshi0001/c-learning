// switch by integers

#include <stdio.h>

int main() {
    int day ;  // Initialize the day variable (can be user input)
    printf("enter a case");
    scanf( "%d" ,&day);
    printf("%d\n" , day);
    // Use a switch statement to print the day of the week
    switch(day) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
        case 7: printf("Sunday\n"); break;
        default: printf("Invalid day. Please enter a number between 1 and 7.\n");
    }

    return 0;  // Return 0 to indicate successful program termination
}

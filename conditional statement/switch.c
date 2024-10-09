// switch. by integers

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


// switch by character

#include <stdio.h>

int main() {
    char day;  // Declare a variable to hold the day character

    // Prompt the user to enter a day character
    printf("Enter a character representing the day (m/t/w/T/f/s/S): ");
    scanf(" %c", &day);  // Read a character input from the user

    // Use a switch statement to determine the day of the week
    switch(day) {
        case 'm':
            printf("Monday\n");
            break;
        case 't':
            printf("Tuesday\n");
            break;
        case 'w':
            printf("Wednesday\n");
            break;
        case 'T':
            printf("Thursday\n");
            break;
        case 'f':
            printf("Friday\n");
            break;
        case 's':
            printf("Saturday\n");
            break;
        case 'S':
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input. Please enter a valid character for the day.\n");
    }

    return 0;  // Indicate successful program termination
}

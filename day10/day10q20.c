#include <stdio.h>
int main(){
    // Declare variable for day number
    int day;

    // Prompt user for input
    printf("Enter a number (1-7): ");
    scanf("%d", &day);

    // Use switch-case to determine the day
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}

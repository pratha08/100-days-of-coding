/*  
Write a program to calculate library fine based on late days.
Date: 21/08/2026
*/

#include <stdio.h>
int main(){
    // Declare variable for late days
    int late_days;
    int fine = 0;

    // Prompt user for input
    printf("Enter number of late days: ");
    scanf("%d", &late_days);

    // Calculate fine based on the given conditions
    if (late_days > 30) {
        printf("Membership Cancelled\n");
    } 
    else {
        if (late_days <= 5) {
            fine = late_days * 2;
        } 
        else if (late_days <= 10) {
            fine = (5 * 2) + ((late_days - 5) * 4);
        } 
        else if (late_days <= 30) {
            fine = (5 * 2) + (5 * 4) + ((late_days - 10) * 6);
        }
        
        // Print the calculated fine
        printf("Fine ₹%d\n", fine);
    }

    return 0;
}

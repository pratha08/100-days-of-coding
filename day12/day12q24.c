/*  
Write a program to calculate electricity bill based on units consumed.
Date: 21/08/2026
*/

#include <stdio.h>
int main(){
    // Declare variable for units consumed
    int units;
    int bill = 0;

    // Prompt user for input
    printf("Enter units consumed: ");
    scanf("%d", &units);

    // Calculate bill based on the slab rates
    if (units <= 100) {
        bill = units * 5;
    } 
    else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 7);
    } 
    else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    } 
    else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }

    // Print the calculated bill
    printf("Bill: ₹%d\n", bill);
return 0;
}

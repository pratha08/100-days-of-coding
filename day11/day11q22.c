/*  
Write a program to find profit or loss percentage given cost price and selling price.
Date: 20/08/2026
*/

#include <stdio.h>
int main(){
    // Declare variables for cost price and selling price
    float cp, sp, difference, percentage;

    // Prompt user for input
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);

    // Calculate profit or loss
    if (sp > cp) {
        difference = sp - cp;
        percentage = (difference / cp) * 100;
        // %g removes trailing zeros for nice integer printing
        printf("Profit %g%%\n", percentage);
    } 
    else if (cp > sp) {
        difference = cp - sp;
        percentage = (difference / cp) * 100;
        printf("Loss %g%%\n", percentage);
    } 
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}

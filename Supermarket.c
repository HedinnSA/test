/*
* Supermarket Coin Processor - P.102
* This program will take the total amount of coins from a coin counter
* Converts the values of all types of coins into cents.
* From there, be able to show the total dollar and cent amount for the coins counted.
* Initials are needed to personalize each credit slip from the counter.
*/

#include <stdio.h>

int main(void){
    char first, middle, last;
    int dollars,
        quarters,
        dimes,
        nickles,
        pennies;    

    // User inserts their initals for their reciept
    printf("Insert your 3 initals and press Enter \n");
    scanf("%c%c%c", &first, &middle, &last);

    // Coins counted inserted in
    printf("%c%c%c, Enter your coin information\n", first, middle, last);
    printf("Number of $ coins > ");
    scanf("%d", &dollars);

    printf("Number of quarters> ");
    scanf("%d", &quarters);

    printf("Number of dimes   > ");
    scanf("%d", &dimes);

    printf("Number of nickles > ");
    scanf("%d", &nickles);
    
    printf("Number of pennies > ");
    scanf("%d", &pennies);

    // Converts the variables in cents and sums them to the total amount of cents.
    // Total cents then converted into total dollars and the change (rest) is found.
    int total_cents, total_dollars, change;

        total_cents = 100 * dollars + 25 * quarters + 10 * dimes + 5 * nickles + pennies;

        total_dollars = total_cents / 100;

        change = total_cents % 100;
    
    printf("\n\n %c%c%c Coin Credit \n Dollars: %d\n Change: %d cents.\n",first, middle, last, total_dollars, change);

    return 0;
}

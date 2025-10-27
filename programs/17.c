// Electricity Bill Calculator
// Input electricity units consumed and calculate bill using the following rules:
// Up to 100 units – Rs. 10 per unit  
// 101–200 units – Rs. 15 per unit  
// Above 200 units – Rs. 20 per unit

#include <stdio.h>
#include <string.h>

int main() {
    float units;
    float price = 0;
    char username[50];

    printf("Enter your username: ");
    scanf("%s", username);

    printf("Enter your units: ");
    scanf("%f", &units);

    printf("\n------------ ELECTRICITY BILL CALCULATOR ---------------------\n");
    printf("NAME : %s\n", username);
    printf("UNITS CONSUMED : %.2f\n", units);

    if (units > 0 && units <= 100) {
        price = 10 * units;
    } else if (units > 100 && units <= 200) {
        price = 15 * units;
    } else if (units > 200) {
        price = 20 * units;
    } else {
        printf("Invalid unit value.\n");
        return 0;
    }

    printf("AMOUNT DUE: Rs. %.2f\n", price);
    printf("-------------------------------------------------------------\n");

    return 0;
}
////Copyright-----C-Programming by Ibtasaam Abbasi----------------------------------

/// Write a program to calculate the simple interest
#include <stdio.h>
int main()
{
    float principalVal, interestRate, simpleInterest;
    int time;
    printf("Enter Principal Amount(in dollars): ");
    scanf("%f", &principalVal);
    printf("Enter interest Rate (in %%): ");
    scanf("%f", &interestRate);
    printf("Enter time(in years): ");
    scanf("%d", &time);
    simpleInterest = (principalVal * interestRate * time) / 100;
    printf("Simple Interest: %.1f", simpleInterest);
    return 0;
}
////Copyright-----C-Programming by Ibtasaam Abbasi----------------------------------


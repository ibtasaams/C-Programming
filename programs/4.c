////Write a program to calculate the sum of five numbers and their percentage
#include <stdio.h>
int main()
{
    const int total = 500;
    float sub1, sub2, sub3, sub4, sub5, sum, percentage;
    printf("Enter marks\n(use this format to enter marks)\n>>sub1 sub2 sub3 sub4 sub5 ");
    scanf(" %f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);
    sum = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (sum / total) * 100;
    printf("Total Marks: %d\nObtained Marks: %.1f\nPercentage: %.1f", total, sum, percentage);
    return 0;
}
////Copyright-----C-Programming by Ibtasaam Abbasi----------------------------------

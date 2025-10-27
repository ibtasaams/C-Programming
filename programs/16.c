/// Write a grade calculation program to calulate the grades of students
// A: 90–100
// B: 80–89
// C: 70–79
// D: 60–69
// F: Below 60
#include <stdio.h>
int main()
{
    const int total = 500;
    float sub1, sub2, sub3, sub4, sub5, sum, percentage;
    printf("Enter marks\n(use this format to enter marks)\n>>sub1 sub2 sub3 sub4 sub5 ");
    scanf(" %f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);
    sum = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (sum / total) * 100;
    printf("----------RESULT CARD-----------\n");
    printf("TOTAL MARKS: %d \n", total);
    printf("OBTAINED MARKS: %f \n",sum);
    printf("PERCENTAGE: %f \n", percentage);

    /// Write the grading formulas
    if (percentage >= 90 && percentage <= 100)
    {
        printf("Grade A");
    }
    else if (percentage >= 80 && percentage < 90)
    {
        printf("Grade B");
    }
    else if (percentage >= 70 && percentage < 80)
    {
        printf("Grade C");
    }
    else if (percentage >= 60 && percentage < 70)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F-Below Average");
    }

    return 0;
}
////Copyright-----C-Programming by Ibtasaam Abbasi----------------------------------

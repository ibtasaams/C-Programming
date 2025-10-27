// Write a program to check if the year is a leap year or not
#include <stdio.h>

int main()
{
    int year;
    printf("Enter year to check: ");
    scanf("%d", &year);

    if (year < 0)
    {
        printf("Enter a valid year.\n");
    }
    else if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
////Copyright-----C-Programming by Ibtasaam Abbasi----------------------------------

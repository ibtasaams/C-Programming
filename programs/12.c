////Write a program to check if a number is even or odd
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("%d is even", num);
    }
    else
    {
        printf("%d is odd", num);
    }
    return 0;
}
////Copyright-----C-Programming by Ibtasaam Abbasi----------------------------------

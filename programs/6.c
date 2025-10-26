////Write  program to swap two integers using a temperory variable
#include <stdio.h>
int main()
{
    int num1, num2, temp;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("\nBefore Swapping\nFirst Number: %d\nSecond Number: %d", num1, num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("\nAfter Swapping\nFirst Number: %d\nSecond Number: %d", num1, num2);
    return 0;
}
////Copyright-----C-Programming by Ibtasaam Abbasi----------------------------------

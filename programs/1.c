/// Write a program to build a simple calculator
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    int add, sub, mult, div, remainder;
    add = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;
    remainder = num1 % num2;
    /// Print the results
    printf("The sum of %d and %d is %d\n", num1, num2, add);
    printf("The difference of %d and %d is %d\n", num1, num2, sub);
    printf("The product of %d and %d is %d\n", num1, num2, mult);
    printf("The quotient of %d and %d is %d\n", num1, num2, div);
    printf("The remainder of %d and %d is %d\n", num1, num2, remainder);
    return 0;
}
////Copyright-----C-Programming by Ibtasaam Abbasi----------------------------------
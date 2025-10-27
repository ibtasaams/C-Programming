// Write a program to calculate the greatest of three numbers using if-else
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("%d is the greatest number.\n", a);
    } 
    else if (b >= a && b >= c) {
        printf("%d is the greatest number.\n", b);
    } 
    else {
        printf("%d is the greatest number.\n", c);
    }

    return 0;
}
////Copyright-----C-Programming by Ibtasaam Abbasi----------------------------------

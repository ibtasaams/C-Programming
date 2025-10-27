// Write a program to check if the user is eligible to vote or not
#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0) {
        printf("Enter a valid age.\n");
    } 
    else if (age < 18) {
        printf("You are %d years old. Not eligible for voting.\n", age);
    } 
    else {
        printf("You are %d years old. Eligible for voting.\n", age);
    }

    return 0;
}
////Copyright-----C-Programming by Ibtasaam Abbasi----------------------------------

////Write a program to caluclate the area and width of rectangle
#include <stdio.h>
int main()
{
    float length, width, area, perimeter;
    printf("Enter the length of rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of rectangle: ");
    scanf("%f", &width);
    area = length * width;
    perimeter = 2 * (length + width);
    printf("The area of rectangle is %.2f\n", area);
    printf("The perimeter of rectangle is %.2f\n", perimeter);
    return 0;
}
////Copyright-----C-Programming by Ibtasaam Abbasi----------------------------------

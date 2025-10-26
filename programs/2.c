// Write a program to calculate the area and circumference of the circle
#include <stdio.h>
int main()
{
    float radius, area, circumference;
    const float pi = 3.1415;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    circumference = 2 * pi * radius;
    area = pi * (radius * radius);
    printf("The area of circle is %.2f\n", area);
    printf("The circumference of circle is %.2f\n", circumference);
    return 0;
}
////Copyright-----C-Programming by Ibtasaam Abbasi----------------------------------

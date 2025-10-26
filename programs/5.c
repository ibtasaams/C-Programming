////Write a program to calculate the volume of a sphere
#include <stdio.h>
int main()
{
    float radius, volume;
    const float pi = 3.141516;
    printf("Enter radius of sphere: ");
    scanf("%f", &radius);
    volume = (4.0 / 3.0) * pi * radius * radius * radius;
    printf("The volume of sphere is %.2f", volume);
    return 0;
}
////Copyright-----C-Programming by Ibtasaam Abbasi----------------------------------

/// Calculate the total cost of a carpet in a room if the total cost per square meter is 500$
#include <stdio.h>
int main()
{
    float length, width, area, finalPrice;
    const int pricePerSqm = 500;
    printf("Enter length: ");
    scanf("%f", &length);
    printf("Enter width: ");
    scanf("%f", &width);
    area = length * width;
    finalPrice = pricePerSqm * area;
    printf("Total Price =  $%.1f", finalPrice);
    return 0;
}
////Copyright-----C-Programming by Ibtasaam Abbasi----------------------------------

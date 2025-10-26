///Write a program to convert celsius scale into fahrenhiet and kelvin scale
#include <stdio.h>
int main() {
    float celsius, kelvin, fahrenheit;

    printf("Enter temperature in Celsius Scale: ");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15; 
    fahrenheit = (9.0 / 5.0) * celsius + 32;

    printf("Celsius Scale: %.2f\nKelvin Scale: %.2f\nFahrenheit Scale: %.2f\n",
           celsius, kelvin, fahrenheit);

    return 0;
}
////Copyright-----C-Programming by Ibtasaam Abbasi----------------------------------


#include <stdio.h>
int main()
{
    double mass1, mass2, distance, force;
    const double G = 6.673e-11;
    printf("Enter mass1 (kg): ");
    scanf("%lf", &mass1);
    printf("Enter mass2 (kg): ");
    scanf("%lf", &mass2);
    printf("Enter distance between the masses (m): ");
    scanf("%lf", &distance);
    force = (G * mass1 * mass2) / (distance * distance);
    printf("Gravitational Force = %.10e N\n", force);
    return 0;
}
////Copyright-----C-Programming by Ibtasaam Abbasi----------------------------------


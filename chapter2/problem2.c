/*
WAP to receive cartesian co-ordinates (x, y) of a point and convert them into polar co-ordinates (r, omega)
Hint: r = sqrt(x^2 + y^2) and o = tan^-1 (y/x)
*/

#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846  // Define PI manually

int main() {
    float x, y, r, phi;

    // Input Cartesian coordinates
    printf("Enter the Cartesian coordinates (x, y): ");
    scanf("%f %f", &x, &y);

    // Calculate polar coordinates
    r = sqrt(x * x + y * y);            
    phi = atan2(y, x);                  
    
    // Convert phi to degrees
    phi = phi * 180.0 / PI;

    // Output polar coordinates
    printf("Polar coordinates (r, phi) are: (%.4f, %.4f degrees)\n", r, phi);

    return 0;
}


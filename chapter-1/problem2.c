// Rectangle :
// length, width (input)
// area, perimeter ?
// a = l * w, p = 2l * 2w

// Circle :
// radius (input)
// area, circumference ?
// a = pi * r*r, c = 2 * pi * r

#include<stdio.h>
#include<math.h>

int main() {
    float recLength, recWidth, circleRadius;
    float recArea, recPerimeter, circleArea, circleCircumference;

    printf("Enter length and width of the rectangle: ");
    scanf("%f %f", &recLength, &recWidth);

    recArea = recLength * recWidth;
    recPerimeter = 2 * recLength * 2 * recWidth;

    printf("The area of the rectange: %f\n", recArea);
    printf("The perimeter of the rectange: %f\n", recPerimeter);

    printf("Enter the radius of circle: ");
    scanf("%f", &circleRadius);

    circleArea = 3.14 * (circleRadius * circleRadius);
    circleCircumference = 2 * 3.14 * circleRadius;

    printf("The area of the circle: %f\n", circleArea);
    printf("The circumference of the circle: %f\n", circleCircumference);

    return 0;
}
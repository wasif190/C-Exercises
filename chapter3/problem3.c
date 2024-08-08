/*
Given l and w of a rectangle, WAP to find whether the area of the rec. is
greater than its perimeter.
*/

#include <stdio.h>

int main() {
    float l, w, area, perimeter;

    // Input length and width of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &l);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &w);

    // Calculate area and perimeter
    area = l * w;
    perimeter = 2 * (l + w);


    if (area > perimeter) {
        printf("The area of the rectangle (%.2f) is greater than its perimeter (%.2f).\n", area, perimeter);
    } else if (area < perimeter) {
        printf("The area of the rectangle (%.2f) is less than its perimeter (%.2f).\n", area, perimeter);
    } else {
        printf("The area of the rectangle (%.2f) is equal to its perimeter (%.2f).\n", area, perimeter);
    }

    return 0;
}

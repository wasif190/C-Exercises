/*
WAP to find the absolute value of a number entered through the keyboard.
*/

#include <stdio.h>

int main() {
    float number, absoluteValue;

    // Input a number
    printf("Enter a number: ");
    scanf("%f", &number);

    if (number < 0) {
        absoluteValue = -number;
    } else {
        absoluteValue = number; 
    }

    printf("The absolute value is: %.2f\n", absoluteValue);

    return 0;
}

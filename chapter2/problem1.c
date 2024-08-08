/*
Two numbers are input through the keyboard into two locations C and D.
WAP to interchange the contents of C and D.
*/

#include <stdio.h>

int main() {
    int C, D, temp;

    // Input two numbers
    printf("Enter the value for C: ");
    scanf("%d", &C);
    printf("Enter the value for D: ");
    scanf("%d", &D);

    // Display original values
    printf("Before swapping: C = %d, D = %d\n", C, D);

    // Interchange the contents of C and D
    temp = C; 
    C = D;   
    D = temp; 

    // Display swapped values
    printf("After swapping: C = %d, D = %d\n", C, D);

    return 0;
}

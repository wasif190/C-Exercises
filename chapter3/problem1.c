/*
If ages of Ram, Shyam and Ajay are input through keyboard, 
WAP to determine the youngest of the three.
*/

#include<stdio.h>

int main() {
    int ramAge, shyamAge, ajayAge;
    printf("Enter the age of ram, shyam, and ajay: ");
    scanf("%d%d%d", &ramAge, &shyamAge, &ajayAge);

    if (ramAge > shyamAge) {
        if (ramAge > ajayAge) {
            printf("Ram is youngest");
        } else {
            printf("Ajay is youngest");
        }
    } else {
        if (shyamAge > ajayAge) {
            printf("Shyam is youngest");
        } else {
            printf("Ajay is youngest");
        }
    }

    return 0;
}
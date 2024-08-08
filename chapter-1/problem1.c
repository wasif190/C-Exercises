
#include<stdio.h>

int main() {
    int F, C;
    printf("Enter temp in fahrenheit: ");
    scanf("%d", &F);
    C = (F - 32) * 5/9;
    printf("The temp in centigrade: %d", C);

    return 0;
}
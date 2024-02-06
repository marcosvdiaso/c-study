#include<stdio.h>

int main() {
    // Create variables
    int length, width, area;

    // Asks the length to the user and then storage this data
    printf("What's the length?\n");
    scanf("%d", &length);

    // Asks the width to the user and then storage this data
    printf("What's the width?\n");
    scanf("%d", &width);

    // Calculate the area, then print the area
    area = length * width;
    printf("The area of this rectangle is %d", area);

    return 0;
}

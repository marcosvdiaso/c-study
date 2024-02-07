#include<stdio.h>

int main() {
    // Create variables
    int length, width, area;
    char choice;

    // Loop
    do{
    // Asks the length to the user and then storage this data
    printf("What's the length?\n");
     if (scanf("%d", &length) != 1){
        printf("Error: Invalid operation. Please enter a number\n");
        while (getchar() != '\n');
        continue;
    }

    // Asks the width to the user and then storage this data
    printf("What's the width?\n");
    if (scanf("%d", &width) != 1){
        printf("Error: Invalid operation. Please enter a number\n");
        while (getchar() != '\n');
        continue;
    }

    // Calculate the area, then print the area
    area = length * width;
    printf("The area of this rectangle is %d\n", area);

    // Clear input buffer
    getchar();

    // Asks if the user wants to continue
    printf("Do you want to calculate another area?(Y/N)\n");
    scanf(" %c", &choice);
    getchar(); // Clear input buffer
    } while (choice == 'Y' || choice == 'y');

    return 0;
}

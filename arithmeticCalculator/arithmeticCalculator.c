#include <math.h>
#include <stdio.h>

int main() {
  // Variable declaration
  double x, y, calc;
	int op;
	char choice;

	// Loop
	do{
  	// Operation selection
  	printf("Select an operation:\n");
  	printf("1. Add\n");
  	printf("2. Subtract\n");
  	printf("3. Multiply\n");
  	printf("4. Divide\n");
  	printf("5. Exponentiation\n");
    printf("6. Rooting\n");

    if (scanf("%d", &op) != 1 || op < 1 || op > 6) {
        printf("Error: Invalid operation. Please enter a number between 1 and 6.\n");
        while (getchar() != '\n'); // Clear input buffer
        continue;
    }

  	// Request the first number
    printf("Enter the first number: ");
    if (scanf("%lf", &x) != 1) {
        printf("Error: Invalid input. Please enter a valid number.\n");
        while (getchar() != '\n'); // Clear input buffer
        continue;
    }

  	// Request the second number
    printf("Enter the second number (The exponent in potentiation or the index in rooting): ");
    if (scanf("%lf", &y) != 1) {
        printf("Error: Invalid input. Please enter a valid number.\n");
        while (getchar() != '\n'); // Clear input buffer
        continue;
    }

    switch(op) {
        case 1: // Addition
            calc = x + y;
            printf("The result of the addition is %lf.\n", calc);
            break;
        case 2: // Subtraction
            calc = x - y;
            printf("The result of the subtraction is %lf.\n", calc);
            break;
        case 3: // Multiplication
            calc = x * y;
            printf("The result of the multiplication is %lf.\n", calc);
            break;
        case 4: // Division
            if (y != 0) {
                calc = x / y;
                printf("The result of the division is %lf.\n", calc);
            } else { // Division by zero
                printf("Error: Division by zero.\n");
            }
            break;
        case 5: // Exponentiation
            calc = pow(x, y);
            printf("The result of the Exponentiation is %lf.\n", calc);
            break;
        case 6: // Rooting
            if (y != 0) {
                calc = pow(x, 1.0 / y);
                printf("The result of the rooting is %lf.\n", calc);
            } else {
                printf("Error: Division by zero.\n");
            }
            break;
    }

    // Ask the user if he wants to continue
    printf("Do you want to do another operation? (y/n): ");
    scanf(" %c", &choice);
    while (getchar() != '\n'); // Clear input buffer

    } while (choice == 'y' || choice == 'Y');

    return 0;
}

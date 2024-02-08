#include<stdio.h>

int main(){
    // Variables declaration
    int conv_opt; // Variable to select the conversion option
    float temp1, temp2; // Temp1 is the user input and Temp2 is the result
    char choice; // Choice is the user choice to continue or not

    // Loop
    do {
    // Temperature converter selection
    printf("Temperature Converter\n");
    printf("\nChoose your conversion option:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Celsius to Kelvin\n");
    printf("3. Fahrenheit to Celsius\n");
    printf("4. Fahrenheit to Kelvin\n");
    printf("5. Kelvin to Celsius\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("7. Exit\n");
    scanf("%d", &conv_opt);

    // Switch case with 6 option of conversions, one option to exit and the default in case of invalid digit
    switch(conv_opt){
        case 1:
            printf("\nHow much C?\n");
            scanf("%f", &temp1);
            temp2 = (temp1 * 9.0 / 5.0) + 32;
            printf("%.2f Celsius is equivalent to %.2f Fahrenheit.\n", temp1, temp2);
            break;
        case 2:
            printf("\nHow much C?\n");
            scanf("%f", &temp1);
            temp2 = temp1 + 273.15;
            printf("%.2f Celsius is equivalent to %.2f Kelvin.\n", temp1, temp2);
            break;
        case 3:
            printf("\nHow much F?\n");
            scanf("%f", &temp1);
            temp2 = (temp1 - 32) * 5 / 9;
            printf("%.2f Fahrenheit is equivalent to %.2f Celsius.\n", temp1, temp2);
            break;
        case 4:
            printf("\nHow much F?\n");
            scanf("%f", &temp1);
            temp2 = (temp1 - 32) * 5 / 9 + 273.15;
            printf("%.2f Fahrenheit is equivalent to %.2f Kelvin.\n", temp1, temp2);
            break;
        case 5:
            printf("\nHow much K?\n");
            scanf("%f", &temp1);
            temp2 = temp1 - 273.15;
            printf("%.2f Kelvin is equivalent to %.2f Celsius.\n", temp1, temp2);
            break;
        case 6:
            printf("\nHow much K?\n");
            scanf("%f", &temp1);
            temp2 = (temp1 - 273.15) * 1.8 + 32;
            printf("%.2f Kelvin is equivalent to %.2f Fahrenheit.\n", temp1, temp2);
            break;
        case 7: // If the user inputs 7, the program closes
            return 0;
        default: // If the user input something different than {1 ... 7} it's an invalid digit
            printf("Invalid digit.\n");
            break;
        }

        getchar(); // Clear the input bugger
        printf("\nDo you want to do another conversion? (Y/N)\n"); // Asks if the user wants to continue or not
        scanf(" %c", &choice);

        }while(choice == 'Y' || choice == 'y'); // If the user inputs 'Y' or 'y' the program restarts, if input any other thing the program closes

    return 0;
}

#include<stdio.h>

int main(){
    int x;
    char even[50] = ""; // Empty string for even numbers
    char odd[50] = ""; // Empty string for odd numbers

    printf("List of even and odd numbers up to 10.\n");
    for(x = 1; x <= 10; x++) {
        if (x % 2 == 0){
            if (even[0] != '\0')
                strcat(even, ", "); // Add a comma before all the elements except the first
                sprintf(even + strlen(even), "%d", x); // Add the number to the string
        } else {
            if (odd[0] != '\0')
                strcat(odd, ", "); // Add a comma before all the elements except the first
                sprintf(odd + strlen(odd), "%d", x); // Add the number to the string
        }
    }

    printf("Even: %s.\n", even); // Print the even numbers
    printf("Odd: %s.\n", odd); // Print the odd numbers

    return 0;
}

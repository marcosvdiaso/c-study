#include<stdio.h>
#include<windows.h> // Library with sleep and cls

    void clearScreen() { // Function that clear the screen
    system("cls");
    }

int main(){
    int sw;

    printf("Stopwatch.\n\n");
    printf("How many seconds?\n");
    scanf("%d", &sw); // Asks the user how many seconds

    while (sw != -1){ /* Loop with 1. Clear Screen, 2. Print the actual second
        3. Wait 1000 milliseconds, 4. decreases the value of sw and repeats */
        clearScreen();
        printf("%d\n", sw);
        Sleep(1000);
        sw--;
    }

    printf("End.");
    return 0;
}

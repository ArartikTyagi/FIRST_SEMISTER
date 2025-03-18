#include <stdio.h>
int main() {
    int num;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;
    char choice;
    do {
        // Asking the user to enter a number
        printf("Enter a number: ");
        scanf("%d", &num);
        // Checking if the number is positive, negative, or zero
        if (num > 0) {
            positiveCount++;
        } else if (num < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
        // Asking the user if they want to continue
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);  // space before %c to consume any trailing newline

    } while (choice == 'y' || choice == 'Y');

    // Displaying the counts
    printf("\nCount of positive numbers: %d\n", positiveCount);
    printf("Count of negative numbers: %d\n", negativeCount);
    printf("Count of zeroes: %d\n", zeroCount);

    return 0;
}
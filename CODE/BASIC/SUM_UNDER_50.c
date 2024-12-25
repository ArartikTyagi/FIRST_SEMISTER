#include <stdio.h>
int main() {
    int num1, num2, sum;
    // Input two numbers from the user
    printf("Enter two numbers under 50:\n");
    scanf("%d %d", &num1, &num2);  
    // Ensure both numbers are under 50
    if(num1 >= 50 || num2 >= 50) {
        printf("Please enter numbers less than 50.\n");
    } else {
        // Add the numbers
        sum = num1 + num2;
        printf("The sum of %d and %d is: %d\n", num1, num2, sum);
    }
    return 0;
}
#include <stdio.h>

int main() {
    int num;
    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    // Check if the number is even or odd using bitwise AND
    if (num & 1) {
        printf("%d is an odd number.\n", num);
    } else {
        printf("%d is an even number.\n", num);
    }
    return 0;
}

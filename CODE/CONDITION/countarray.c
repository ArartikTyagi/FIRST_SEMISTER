#include <stdio.h>
#define MAX_SIZE 100 // Define the maximum size of the array
int main() {
    int arr[MAX_SIZE];
    int n, i;
    int positiveCount = 0, negativeCount = 0;
    int evenCount = 0, oddCount = 0;
    // Read the number of integers
    printf("Enter the number of integers (max %d): ", MAX_SIZE);
    scanf("%d", &n);
    // Check if the number of integers is within the valid range
    if (n <= 0 || n > MAX_SIZE) {
        printf("Invalid number of integers.\n");
        return 1;
    }
    // Read the integers into the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Count positive, negative, odd, and even numbers
    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        }
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    printf("Count of positive numbers: %d\n", positiveCount);
    printf("Count of negative numbers: %d\n", negativeCount);
    printf("Count of even numbers: %d\n", evenCount);
    printf("Count of odd numbers: %d\n", oddCount);
    return 0;
}
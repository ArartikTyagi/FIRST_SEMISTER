#include <stdio.h>
#define MAX_SIZE 100 // Define the maximum size of the array
int main() {
    int arr[MAX_SIZE];
    int n, i, searchNum, frequency = 0;
    // Read the number of integers
    printf("Enter the number of integers (max %d): ", MAX_SIZE);
    scanf("%d", &n);
    // Check if the number of integers is within the valid range
    if (n <= 0 || n > MAX_SIZE) {
        printf("Invalid number of integers.\n");
        return 1;
    }
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to find its frequency: ");
    scanf("%d", &searchNum);
    for (i = 0; i < n; i++) {
        if (arr[i] == searchNum) {
            frequency++;
        }
    }
    printf("The frequency of %d is: %d\n", searchNum, frequency);
    return 0;
}
#include <stdio.h>
#define MAX_SIZE 100 // Define maximum size of the array
int main() {
    int arr[MAX_SIZE];
    int n, i, largest, secondLargest;
    printf("Enter the number of integers (max %d): ", MAX_SIZE);
    scanf("%d", &n);
    if (n <= 0 || n > MAX_SIZE) {
        printf("Invalid number of integers.\n");
        return 1;
    }
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    largest = secondLargest = -2147483648; // Set to the smallest possible integer
    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest; // Update second largest
            largest = arr[i]; // Update largest
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i]; 
        }
    }
    if (secondLargest == -2147483648) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest integer is: %d\n", secondLargest);
    }
    return 0;
}
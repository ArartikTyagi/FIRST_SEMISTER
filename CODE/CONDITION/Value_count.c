#include <stdio.h>

int main() {
    int count = 0;  
    char input[100];
    printf("Enter inputs one by one (type 'q' to quit):\n");

    while (1) {
        printf("Input %d: ", count + 1);
        scanf("%s", input);

        // Check if the user entered 'q' to quit
        if (input[0] == 'q' && input[1] == '\0') {
            break;
        }

        // Increment the input count
        count++;
    }

    printf("You entered %d inputs.\n", count);

    return 0;
}

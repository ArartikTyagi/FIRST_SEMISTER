#include <stdio.h>

int main() {
    int a, b, result;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter the bit position to turn ON (1-based index): ");
    scanf("%d", &b);
    result = a | (1 << (b - 1));
    printf("The number after turning ON the %dth bit is: %d\n", b, result);
    return 0;
}

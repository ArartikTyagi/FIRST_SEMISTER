#include <stdio.h>
int main() {
    int a, result;
    printf("Enter a number: ");
    scanf("%d", &a);
    result = a & (a - 1);
    printf("The number after clearing the lowest set bit is: %d\n", result);
    return 0;
}

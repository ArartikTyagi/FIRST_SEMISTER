#include <stdio.h>
int main() {
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter the bit position to check: ");
    scanf("%d", &b);
    if (a & (1 << (b - 1))) {
        printf("The %dth bit of the number %d is 1.\n", b, a);
    } 
    else {
        printf("The %dth bit of the number %d is 0.\n", b, a);
    }
    return 0;
}

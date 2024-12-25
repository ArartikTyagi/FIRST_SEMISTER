#include <stdio.h>
int main() {
    int num, k, toggled_num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the bit position to toggle (1-based index): ");
    scanf("%d", &k);
    toggled_num = num ^ (1 << (k - 1));
    printf("The number after toggling the %dth bit is: %d\n", k, toggled_num);   
    return 0;
}
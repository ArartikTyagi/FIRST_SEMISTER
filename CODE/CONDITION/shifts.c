#include <stdio.h>
int main() {
    int a = 5; 
    // Left Shift (<<)
    int left_shift_result = a << 1; 
    printf("Left Shift of %d by 1: %d\n", a, left_shift_result);
    // Right Shift (>>)
    int right_shift_result = a >> 1; 
    printf("Right Shift of %d by 1: %d\n", a, right_shift_result);
    return 0;
}
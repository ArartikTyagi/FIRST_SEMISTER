#include <stdio.h>

int main() {
    printf("%d\n", 12);
    printf("%d\n", 012);
    printf("%d\n", 0x12);
    printf("%o\n", 12);
    printf("%x\n", 12);
    printf("%5d\n", 12);
    printf("%e\n", 123.4567);
    printf("%f\n", 123.4567);
    printf("%g\n", 123.4567);
    printf("%0.2f\n", 123.4567);
    printf("%.f\n", 123.4567);
    return 0;
}

#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, aot;
    printf("Enter the coordinates of a point of A \n");
    scanf("%d%d", &a, &b);
    printf("Enter the coordinates of a point of B\n");
    scanf("%d%d", &c, &d);
    printf("Enter the coordinates of a point of C\n");
    scanf("%d%d", &e, &f);
    aot = (0.5) *(a*(d - f) + c*(f - b) + e*(b - d)); // area of triangle
    if (aot == 0)
    {
        printf("Your points A(%d,%d), B(%d,%d), & C(%d,%d) are collinear",a, b, c, d, e, f);
    }
    else
    {
        printf("Your points A(%d,%d), B(%d,%d), & C(%d,%d) are not collinear",a, b, c, d, e, f);
    }
    return 0;
}
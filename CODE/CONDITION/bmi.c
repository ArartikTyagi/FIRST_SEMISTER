#include <stdio.h>
int main()
{
    float x, y, bmi;
    printf("Enter the weight in Kilogram");
    scanf("%f", &x);
    printf("Enter the Height in meters");
    scanf("%f", &y);
    bmi = x / (y * y);
    if (x < 18)
    {
        printf("Your bmi is %.2f and you are in Underweight category", bmi);
    }
    else if (x > 18 || x > 24.9)
    {
        printf("Your bmi is %.2f and you are in Normal category", bmi);
    }
    else if (25 < x || x > 29.9)
    {
        printf("Your bmi is %.2f and you are in OverWeight category", bmi);
    }
    else if (30 < x || x > 34.9)
    {
        printf("Your bmi is %.2f and you are in Moderately obse category", bmi);
    }
    else
    {
        printf("your bmi is %.2f and you are in Morbidly obse category", bmi);
    }
    return 0;
}

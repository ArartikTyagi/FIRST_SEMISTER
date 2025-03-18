#include <stdio.h>
int GCD(int num1, int num2)
{
    if (num2 == 0)
    {
        return num1;
    }
    else
    {
        return GCD(num2, num1 % num2);
    }
}
int main()
{
    int num1, num2, gcd;
    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    gcd = GCD(num1, num2);
    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd);//result
    return 0;
}
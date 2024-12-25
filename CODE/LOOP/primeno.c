#include <stdio.h>
int prime(int a)
{
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
}
int main()
{
    int a;
    printf("Enter your number: ");
    scanf("%d", &a);
    if (prime(a))
    {
        printf("your number is a prime number");
    }
    else
    {
        printf("Your number is not a prime number");
    }
    return 0;
}
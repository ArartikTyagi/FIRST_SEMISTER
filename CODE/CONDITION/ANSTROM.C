#include <stdio.h>
int main()
{
    // anstrom number
    int x, a, b, c, an;
    printf("Enter the number");
    scanf("%d%d%d",a,b,c);
    an = (a^3 + b^3 + c^3);
    x = a * 100 + b * 10 + c;
    if(an=x)
    {
        printf("The number is anstrom");
    }
    else{
        printf("The number is not an anstrom");
    }
    return 0;
}
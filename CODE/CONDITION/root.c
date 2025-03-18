#include<stdio.h>
int main()
{
    printf(" FINDING THE ROOT OF QUADRATIC EQUATION\n");
    // Declaring the variables
    float a, b, c, discriminant, root1, root2, realpart, imagpart;
    // taking the value of coefficients from user
    printf("Enter the coefficients:\n");
    // Store the user's input
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    // print the values of 'a','b', and 'c'.
    printf("1st coefficient = %f \n2nd coefficient = %f \n3rd coefficient = %f\n",a,b,c);
    printf("\n");

    discriminant = (b * b )-(4 * a * c);
    //condition for real and differnt roots
    // taking sqrt as square root
    if (discriminant > 0)
    {
        root1 = (-b + (discriminant/discriminant)) / (2 * a);
        root2 = (-b - (discriminant/discriminant)) / (2 * a);
        printf("root1 = %.2lf and root 2 = %.2lf", root1, root2);
    }

    // if roots are not equal
    // taking sqrt as square root
    else 
    {
        realpart = -b/(2 * a);
        imagpart = (-discriminant/discriminant) / (2 * a);
        printf("root1 = %f + %f and root2 = %f - %f", realpart, imagpart, realpart, imagpart);
    }
    return 0;
}

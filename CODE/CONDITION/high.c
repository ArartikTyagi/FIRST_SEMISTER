#include <stdio.h>
int main()
{
    // the greatest integer in 3 number
    int a, b, c;
    printf("Enter the first Number ");
    scanf("%d", &a);
    printf("Enter the Second Number ");
    scanf("%d", &b);
    printf("Enter the Third Number ");
    scanf("%d", &c);
    if(a>b && b>c){
        printf("Greatest integer is %d \n", a);
    }
    else if(b>c){
        printf("Greatest integer is %d \n", b);
    }
    else{
        printf("Greatest Integer is %d \n", c);
    }
    return 0;
}
#include <stdio.h>
int main()
// LOGICAL OPERATOR
{    
    int a;
    printf("Enter the number ",a);
    scanf("%d", &a);
    if(a%3==0){
        printf ("Fizz \n",a);
    }
    else if(a%5==0){
        printf("Buzz \n",a);
    }
    else if(a%15==0){
        printf("Fizzbuzz \n",a);
    }    
    else{
        printf("Hahaha");
    }
return 0;
}
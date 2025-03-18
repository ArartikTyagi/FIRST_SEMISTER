#include<stdio.h>
int main()
{
    // the number is divisible by 2 , 3 and both
    int x;
    printf("Enter the number ");
    scanf("%d", &x);
    if(x%2==0 && x%3==0){
    printf("Your number is divisible by 2 and 3 \n");
    }
    else if(x%2==0){
    printf("Your number is divisible by 2 \n");
    }
    else if(x%3==0){
    printf("Your number is divisible by 3 \n");
    }
    else{
        printf("Error");
    }
return 0;
}
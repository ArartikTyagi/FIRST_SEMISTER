#include <stdio.h>
int main()
{
    int a;
    printf("Enter a Number \n");
    scanf("%d",&a);
    if(a%5==0){
        printf("your number is divisible by 5");
    }
    else if (a%5==1){
        printf("reminder is 1");
    }
    else if (a%5==2){
        printf("reminder is 2");
    }
    else if (a%5==3){
        printf("reminder is 3");
    }
    else if (a%5==4){
        printf("reminder is 4");
    }
}
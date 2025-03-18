#include<stdio.h>
int main()
{
char ch;
//Input character from user
printf("Enter any number to check whether it is a alphabet, a digit or a special character\n"); 
scanf("%c",&ch);
//checking if the input is a alphabet 
if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
{
printf("%c is a alphabet!\n",ch);
}
//checking if the input is a digit 
else if(ch >= 48 && ch <= 57)
{
printf("%c is digit!\n",ch);
}
//checking if the input is a special character
else
{
printf("%c is special character!\n",ch);
}
return 0;
}
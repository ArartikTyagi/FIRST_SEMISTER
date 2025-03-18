#include<stdio.h>
int main()
{
char ch;
//Input character from user
printf("Enter any number to check whether it is a alphabet, a digit or a special character\n"); 
scanf("%c",&ch);
//checking if the input is a alphabet 
if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
{
printf("%c is a alphabet!\n",ch);
}
//checking if the input is a digit else 
if(ch >= '0' && ch <= '9')
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
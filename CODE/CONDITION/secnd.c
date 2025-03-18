#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter First number=");
scanf("%d",&a);
printf("Enter Second number=");
scanf("%d",&b);
printf("Enter Third number=");
scanf("%d",&c);
//if a is greater than both b and c 
if(a>=b&&a>=c)
{
if(b>c)
printf("The second greatest number=%d\n",b);
else
printf("The second greatest number=%d\n",c);
}
//if b is greater than both a and c
else if(b>=a&&b>=c)
{
if(a>c)
printf("The second greatest number=%d\n",b);
else
printf("The second greatest number=%d\n",c);
}
//if c is greater than both a and b
else
{
if(a>b)
printf("The second greatest number=%d\n",a);
else
printf("The second greatest number=%d\n",b);
}
return 0;
}
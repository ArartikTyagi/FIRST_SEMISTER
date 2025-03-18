#include <stdio.h>
int main(){
int a;
printf("enter the number :");
scanf("%d", &a);
for(int i=a; i<=a ; i++)
{
	int temp =i;
	int rev = 0;
	while ( temp>0 )
{
	rev = rev*10+temp%10;
	temp = temp/10;
}
if(i==rev)
{
	printf("%d is a pallendrom\n",a);

}
else
{
	printf("%d is not a pallendrom\n", a);
}
}
return 0;
}
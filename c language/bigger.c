#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a<0)
	{
		printf("%d is a larger then 0",a);
	}
	else if(a==0)
	{
		printf("%d is a 0",a);
	}
	else
	{
		printf("%d is less then 0",a);
	}
	return 0;
	
}
#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter the three number");
	scanf("%d%d%d",&num1,&num2,&num3);
	printf("first number %d\n",num1);
	printf("second number %d\n",num2);
	printf("third number %d\n",num3);
	
	if(num1>num2 && num1>num3)
	{
		printf("First number is a gretest.");
	}
	if(num2>num1 && num2>num3)
	{
		printf("Second number is a gretest.");
	}
	if(num3>num1 && num3>num2)
	{
		printf("third number is a gretest.");
	}
	
	
	return 0;
}
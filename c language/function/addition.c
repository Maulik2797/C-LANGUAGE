#include<stdio.h>
int addition()	// function define
{
	int a,b;
	printf("Enter the a and b:");
	scanf("%d%d",&a,&b);
	printf("The sum is = %d",a+b);
}
int main()
{	
	printf("Hello\n");
	addition();			// function call
	printf("\nmaulik");
}
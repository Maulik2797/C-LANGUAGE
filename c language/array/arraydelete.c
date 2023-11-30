#include<stdio.h>
int main()
{
	int a[10],i;
	for(i=0;i<=9;i++)
	{
		printf("Enter the element: ");
		scanf("%d",&a[i]);
		
	}
	
	for(i=0;i<=9;i++)
	{
		a[i]=0;
		printf("The vlaue of a is %d\n",a[i]);
	}
	return 0;
	
}
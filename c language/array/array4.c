#include<stdio.h>
int main()
{
	int a[5],i;
	for(i=0;i<=4;i++)
	{
		printf("Enter the Value of i:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d\t",a[i]);
		}
	}
	
	return 0;
} 
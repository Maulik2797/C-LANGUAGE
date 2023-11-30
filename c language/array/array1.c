#include<stdio.h>
int main()
{
	int a[5];
	int i;
	for(i=0;i<=4;i++)
	{
		printf("enter the value of i:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
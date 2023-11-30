#include<stdio.h>
int main()
{
	int a[5],i,sum;
	for(i=0;i<=4;i++)
	{
		printf("Enter the Value of sum:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		sum+=a[i];
	}
	printf("%d",sum);
	return 0;
}
#include<stdio.h>
int main()
{
	int a[10],i,sum;
	for(i=0;i<=9;i++)
	{
		printf("Enter the Element: ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=9;i++)
	{
		if(a[i]%2 == 1)
		{
			sum = sum + a[i];
		}
	}
	printf("The odd number's sum is %d",sum);
	return 0;
}
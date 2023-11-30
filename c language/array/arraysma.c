#include<stdio.h>
int main()
{
	int a[2],i;
	for(i=0;i<=1;i++)
	{
		printf("Enter the Element of a and b :");
		scanf("%d",&a[i]);
	}
	if(a[0]<a[1])
		{
			printf("%d is smallest",a[0]);
		}
		else if(a[0]>a[1]) 
		{
			printf("%d is smallest ",a[1]);
		}
	return 0;
}	
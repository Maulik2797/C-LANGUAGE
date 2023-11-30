#include<stdio.h>
int main()
{
	int a[10],i,count=0,j;
	for(i=0;i<10;i++)
	{
		printf("Enter the Element: ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{	count =0;
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				count++;
			}
		}
		
		if(count==0)
		{
			printf("%d is prime\n",a[i]);
			a[i] = 0;
		}
		else
		{
			printf("%d is not prime number \n",a[i]);
		}
	}
	return 0;
}
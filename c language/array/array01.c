#include<stdio.h>
int main()
{
	int a[10],i,b[10],c[10],temp0=0,temp1=0;
	for(i=0;i<10;i++)
	{
		printf("Enter the value 0 or 1 ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
		{
			if(a[i]==0)
			{
				temp0 += 1;
				
			}
			else
			{
				temp1 += 1;
			}
		}
	for(i=0;i<temp0;i++)
	{
		b[i]=0;
		printf("%d\t",b[i]);
	}
	printf("\n");
	for(i=0;i<temp1;i++)
	{
		c[i]=1;
		printf("%d\t",c[i]);
	}
			
	return 0;
}
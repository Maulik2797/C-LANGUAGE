#include<stdio.h>
int main()
{
	int i,j,k=5,n=5;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",k++);
		}
		k=n-i;
		printf("\n");
	}
	return 0;
}
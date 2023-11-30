#include<stdio.h>
int main()
{
	int i,j,k=11;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d,\t",k++);
		}
		k+=5;
		printf("\n");
	}
}
#include<stdio.h>
int main()
{
	int i,j,k=65,n=65;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c\t",k--);
		}
		k=n+i;
		printf("\n");
	}
	return 0;
}
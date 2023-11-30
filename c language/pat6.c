#include<stdio.h>
int main()
{
	int i,j,k=1;
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(k%2==1)
			{
				printf("%d,\t",k);
			}
		}k++;
		printf("\n");
	}
	
	return 0;
}
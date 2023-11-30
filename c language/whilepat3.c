#include<stdio.h>
int main()
{
	int i=5,j=5;
	while(i>=1)
	{   j=5;
		while(j>=1)
		{
			printf("%d\t",i);
			j--;
		}
		printf("\n");
		i--;
	}
	return 0;
}
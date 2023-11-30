#include<stdio.h>
int main()
{
	int i=1,j;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			printf("%d\t",j);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
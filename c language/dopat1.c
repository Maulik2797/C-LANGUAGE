#include<stdio.h>
int main()
{
	int i=1,j=1;
	do
	{
		j=1;
		do
		{
			printf("%d\t",i);
			j++;
		}
		while(j<=5);
		printf("\n");
		i++;
	}
	while(i<=5);
	
	return 0;
}
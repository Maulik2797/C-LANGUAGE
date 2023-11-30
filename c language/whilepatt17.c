#include<stdio.h>
int main()
{
	int i=1,j,k;
	while(i<=5)
	{
		j=5;
		while(j>=i)
		{
			printf(" ");
			j--;
		}
		k=1;
		while(k<=i)
		{
			printf("* ");
			k++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int i=1,j,k=5,n=5;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			printf("%d\t",i%2);
			j++;
		}
		printf("\n");
		i++;;
	}
	return 0;
}
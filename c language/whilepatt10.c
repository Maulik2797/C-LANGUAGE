#include<stdio.h>
int main()
{
	int i=1,j,k=5,n=5;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			printf("%d\t",k);
			k++;
			j++;
		}
		printf("\n");
		k=n-i;
		i++;
	}
	return 0;
}
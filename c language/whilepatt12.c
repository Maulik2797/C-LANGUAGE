#include<stdio.h>
int main()
{
	int i=1,j,k=65,n=65;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			printf("%c\t",k);
			k--;
			j++;
		}
		printf("\n");
		k=n+i;
		i++;
	}
	return 0;
}
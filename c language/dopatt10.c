/*	5
	4       5
	3       4       5
	2       3       4       5
	1       2       3       4       5 	*/

#include<stdio.h>
int main ()
{
	int i=1,j,k=5,n=5;
	do
	{
		j=1;
		do
		{
			printf("%d\t",k);
			k++;
			j++;
		}
		while(j<=i);
		printf("\n");
		k=n-i;
		i++;
	}
	while(i<=5);
	return 0;
}
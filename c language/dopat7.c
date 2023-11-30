
//	1       2       3       4       5
//	6       7       8       9       10
//	11      12      13      14      15
//	16      17      18      19      20
//	21      22      23      24      25

#include<stdio.h>
int main()
{
	int i=1,j=1,k=1;
	do
	{
		j=1;
		do
		{
			printf("%d\t",k);
			k++;
			j++;
		}
		while(j<=5);
		printf("\n");
		i++;
	}
	while(i<=5);
	return 0;
}
 /*	5
	4       4
	3       3       3
	2       2       2       2
	1       1       1       1       1	*/

#include<stdio.h>
int main ()
{
	int i=5,j=1;
	do
	{
		j=5;
		do
		{
			printf("%d\t",i);
			j--;
		}
		while(j>=i);
		printf("\n");
		i--;
	}
	while(i>=1);
	return 0;
}
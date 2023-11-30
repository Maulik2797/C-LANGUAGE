/*	5
	5       4
	5       4       3	
	5       4       3       2
	5       4       3       2       1	*/

#include<stdio.h>
int main()
{
	int i=5,j=1;
	do
	{
		j=5;
		do
		{
			printf("%d\t",j);
			j--;
		}
		while(j>=i);
		printf("\n");
		i--;
	}
	while(i>=1);
	return 0;
}
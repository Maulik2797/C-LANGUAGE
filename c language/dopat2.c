#include<stdio.h>
int main()
	// print 5       5       5       5       5
	//		 4       4       4       4       4
	//		 3       3       3       3       3
	//		 2       2       2       2       2
	//		 1       1       1       1       1
{
	int i=5,j=5;
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
		i--;
	}
	while(i>=1);
	return 0;
}
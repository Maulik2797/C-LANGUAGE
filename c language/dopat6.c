#include<stdio.h>
int main()
//	1       1       1       1       1

//	3       3       3       3       3

//	5       5       5       5       5

//	7       7       7       7       7

//	9       9       9       9       9
{
	int i=1,j=1;
	do
	{
	    j=1;
		do
		{
			if(i%2==1)
			{
				printf("%d\t",i);
			}j++;
		}
		while(j<=5);
		printf("\n");
		i++;
	}
	while(i<=10);
	return 0;
}
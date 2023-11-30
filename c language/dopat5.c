#include<stdio.h>
int main()
//	2       2       2       2       2

//	4       4       4       4       4

//	6       6       6       6       6

//	8       8       8       8       8

//	10      10      10      10      10
{
	int i=1,j=1;
	do
	{
	    j=1;
		do
		{
			if(i%2==0)
			{
				printf("%d\t",i);
				
			}
			j++;
			
		}
		while(j<=5);
		printf("\n");
		i++;
	}
	while(i<=10);
	return 0;
}
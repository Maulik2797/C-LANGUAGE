#include<stdio.h>
int main()
{	
	 /*print 1
			 2 2
			 3 3 3
			 4 4 4 4
			 5 5 5 5 5 */
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",i);
		}
		printf("\n");
	}
return 0;	
}
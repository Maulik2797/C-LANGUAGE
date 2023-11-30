#include<stdio.h>
int main()
{
	/*print 5
		    4       4
		    3       3       3
		    2       2       2       2
		    1       1       1       1       1     */
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=i;j--)
		{
			printf("%d\t",i);
		}
		printf("\n");
	}
	return 0;
}
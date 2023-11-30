#include<stdio.h>
int main()
{
	/* *****
		****
		 ***
          **
		   * */
	int i,j,k;
	for(i=5;i>=1;i--)
	{
		for(j=4;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
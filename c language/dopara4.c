/*	 *****
	  ****
	   ***
	    **
	     *	*/

#include<stdio.h>
int main ()
{
	int i=1,j,k;
	do
	{
		j=1;
			do
			{
				printf(" ");
				j++;
			}
			while(j<=i);
		k=5;
			do
			{
				printf("*");
				k--;
			}
			while(k>=i);
			printf("\n");
			i++;
	}
	while(i<=5);
	return 0;
}

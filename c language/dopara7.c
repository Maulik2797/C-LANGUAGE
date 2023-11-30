#include<stdio.h>
int main ()
{
	int i=1,j,k;
	do
	{
		j=5;
		do
		{
			printf(" ");
			j--;
		}
		while(j>=i);
	k=1;
		do
		{
			printf("* "); 
			k++;
		}
		while(k<=i);
		printf("\n");
		i++;
	}
	while(i<=5);
	
	int a=1,b,c;
	
	do
	{
		b=1;
		do
		{
			printf(" ");
			b++;
		}
		while(b<=a);
		printf(" ");
	c=4;	
		do
		{
			printf("* ");
			c--;
		}	
		while(c>=a);
		printf("\n");
		a++;
	}	
	while(a<=4);
	return 0;
}

/*   *
    * *
   * * *
  * * * *
 * * * * *
  * * * *
   * * *
    * *
     *      */
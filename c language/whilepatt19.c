#include<stdio.h>
int main()
{
	int i=1,j,k;
	while(i<=5)
	{
		j=5;
		while(j>=i)
		{
			printf(" ");
			j--;
		}
		k=1;
		while(k<=i)
		{
			printf("* ");
			k++;
		}
		
		printf("\n");
		i++;
	}
	
	int a=1,b,c; 
	
	while(a<=5)
	{
		b=1;
		while(b<=a)
		{
			printf(" ");
			b++;
		}
		printf(" ");
		c=4;
		while(c>=a)
		{
			printf("* ");
			c--;
		}
		printf("\n");
		a++;
    }
	return 0;
}	
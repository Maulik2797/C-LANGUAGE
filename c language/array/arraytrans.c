#include<stdio.h>
int main()
{
	int i=1,j=1,k=1;
	do
	{
		j=5;
		do
		{
			printf(" ");
			j--;
			
		}while(j>=i);
		printf("\n");
	k=1;
		do
		{
			printf("* ");
			k++;
			
		}while(k<=i);
		printf("\n");
		i++;
	}
	while(i<=5);
	
	int a=1,b=1,c=1;
	do
	{
		b=1;
		do
		{
			printf(" ");
			b++;
			
		}while(b<=a);
		printf("\n");
		//printf(" ");
	c=4;
		do
		{
			printf("* ");
			c--;
			
		}while(c>=a);
		printf("\n");
		a++;
	}
	while(a<=4);
	return 0;
}
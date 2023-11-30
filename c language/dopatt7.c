/*	a
	B       C
	d       e       f
	G       H       I       J
	k       l       m       n       o	*/

#include<stdio.h>
int main ()
{
	int i=1,j,k=65;
	do
	{
		j=1;
		do
		{
			if(i%2==0)
			{
				printf("%c\t",k);
				k++;
			}
			else
			{
				printf("%c\t",k+32);
				k++;
			}j++;
		}
		while(j<=i);
		printf("\n");
		i++;
	}
	while(i<=5);
	return 0;
}
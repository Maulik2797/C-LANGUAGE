/*	A
	b       c
	D       E       F
	g       h       i       j
	K       L       M       N       O	*/

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
				printf("%c\t",k+32);
				k++;
			}
			else
			{
				printf("%c\t",k);
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
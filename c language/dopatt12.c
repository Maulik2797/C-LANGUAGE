/*	A
	B       A
	C       B       A
	D       C       B       A
	E       D       C       B       A	*/

#include<stdio.h>
int main ()
{
	int i=1,j,k=65,n=65;
	do
	{
		j=1;
		do
		{
			printf("%c\t",k);
			k--;
			j++;
		}
		while(j<=i);
		printf("\n");
		k=n+i;
		i++;
	}
	while(i<=5);
	return 0;
}

/*	A
	A       B
	A       B       C
	A       B       C       D
	A       B       C       D       E	*/

#include<stdio.h>
int main()
{
	int i=1,j;
	do
	{
		j=1;
		do
		{
			printf("%c\t",j+64);
			j++;
		}
		while(j<=i);
		printf("\n");
		i++;
	}
	while(i<=5);
	return 0;
}
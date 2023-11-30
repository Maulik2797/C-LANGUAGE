#include<stdio.h>
int main()
// print
//A       B       C       D       E
//F       G       H       I       J
//K       L       M       N       O
//P       Q       R       S       T
//U       V       W       X       Y
{
	int i=1,j=2,k=65;
	do
	{
		j=1;
		do
		{
			printf("%c\t",k);
			k++;
			j++;
		}
		while(j<=5);
		printf("\n");
		i++;
	}
	while(i<=5);
	return 0;
}
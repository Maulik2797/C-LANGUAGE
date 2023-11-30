#include<stdio.h>
int main()
{
	int i=1,j,k=11;
	while(i<=5)
	{   j=1;
		while(j<=5)
		{
			printf("%d\t",k++);
			j++;
		}
		printf("\n");
		i++;
		k+=5;
	}
	
	return 0;
}
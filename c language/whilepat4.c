#include<stdio.h>
int main()
{
	int i=1,j;
	while(i<=5)
	{  j=1;
		while(j<=5)
		{
			
			printf("%c\t",i+64);
			
			j++;
		}
		printf("\n");
		
		i++;
	}
	return 0;
}
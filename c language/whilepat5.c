#include<stdio.h>
int main()
{
	int i=1,j;
	while(i<=10)
	{
		j=1;
		while(j<=5)
		{
			if(i%2==0)
			{
				printf("%d\t",i);
				
			}j++;
		}printf("\n");
		i++;
	}
	return 0;
}
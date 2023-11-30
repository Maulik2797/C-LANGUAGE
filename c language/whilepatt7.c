#include<stdio.h>
int main()
{
	int i=1,j,k=65;
	while(i<=5)
	{
		j=1;
		while(j<=i)
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
		printf("\n");
		i++;
		
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int i=65;
	while(i<=90)
	{
		if(i%2==1)
		{
			printf("%c\t",i);
			i++;
		}
		else
		{
			printf("%c\t",i+32);
			i++;
		}	
	}
	return 0;
}
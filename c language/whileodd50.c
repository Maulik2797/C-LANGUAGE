#include<stdio.h>
int main()
{
	int i=1;
	// print odd number up to 50.
	while(i<=50)
	{
		if(i%2==1)
		{
			printf("%d\t",i);
		}
		i++;
	}
	return 0;	
}
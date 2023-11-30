#include<stdio.h>
int main()
{
	int i=65;
	// print A to Z.
	while(i<=90)
	{
		if(i%2==1)
		{
			printf("%c\t",i++);
			i++;
		}
	}
	return 0;
}
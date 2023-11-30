#include<stdio.h>
int main()
{
	int i=65;
	// print A = a to Z = z.
	while(i<=90)
	{
		printf("%c = %c\n",i,i+32);
		i++;
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int i,b=65,d=97;
	for(i=65;i<=90;i++)
	{
		if(i%2==1)
		{
			printf("%c\t",b);
			b=b+2;
			d =d+2;
		}
		else
		{
			printf("%c\t",d);
			b=b+2;
			d=d+2;
		}
	}
	return 0;
}
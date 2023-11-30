#include<stdio.h>
int main()
{
	int i=1,n,a=0,b=1,c;
	printf("Enter the Number:");
	scanf("%d",&n);
	printf("fibonacci serise = ");
	printf("1 ");
	while(i<=n)
	{
		c=a+b;
		
		printf("%d ",c);
		a=b;
		b=c;
		i++;
		
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int i,a=0,b=1,c,n;
	printf("Enter the Element:");
	scanf("%d",&n);
	printf("%d,\t",b);
	for(i=1;i<n;i++)
	{
		c=a+b;
		printf("%d,\t",c);
		
		a=b;
		b=c;
	}
	return 0;
}
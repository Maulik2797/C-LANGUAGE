#include<stdio.h>
int main()
{	
	// print 1,4,3,16,....,n
	int i=1,n;
	printf("Enter the element:");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==1)
		{
			printf("%d\t",i);
			i++;
		}
		if(i%2==0)
		{
			printf("%d\t",i*i);
			i++;
		}
	}
	return 0;
	
}
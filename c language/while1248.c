#include<stdio.h>
int main()
{
	// print 1,2,4,8,....,n.
	
	int i=1,n;
	printf("Enter the Element:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("%d\t",i);
		i*=2;
	}
	return 0;
}
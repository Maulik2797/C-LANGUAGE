#include<stdio.h>
int main()
{
	// print 1 to n.
	int i=1,n;
	printf("Enter the Element:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("%d\t",i++);
	}
	return 0;
}
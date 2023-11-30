#include<stdio.h>
int main()
{
	// print -n to n;
	int i,n;
	printf("Enter the Element:");
	scanf("%d",&n);
	i=-n;
	
	while(i<=n)
	{
		
		printf("%d\t",i++);
	}
	return 0;
	
}
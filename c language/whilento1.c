#include<stdio.h>
int main()
{	
	// print n to 1;
	int i,n;
	printf("Enter the Element:");
	scanf("%d",&n);
	i=n;
	
	while(i>=1)
	{
		
		printf("%d\t",i--);
	}
	return 0;
}
#include<stdio.h>
int main()
{	
	int i=1,n;
	printf("Enter the Element:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\t",i*i);
		i++;
	}
	return 0;
}

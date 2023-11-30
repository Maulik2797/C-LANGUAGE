#include<stdio.h>
int main()
	// printf -n to n using do while loop
	// -5	-4	-3	-2	-1	0	1	2	3	4	5	
{
	int i=1,n;
	printf("Enter the Element:");
	scanf("%d",&n);
	i=-n;
	do
	{
		printf("%d\t",i++);
	}
	while(i<=n);
}
#include<stdio.h>
int main()
	// print 1       4       9       16      25      36      49      64      81      100 using do while loop
{
	int i=1,n;
	printf("Eneter the element:");
	scanf("%d",&n);
	do
	{
		printf("%d\t",i*i);
		i++;
	}
	while(i<=n);
}
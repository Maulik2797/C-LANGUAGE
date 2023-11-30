#include<stdio.h>
int main()
	// print 1       2       4       8       16      32 using do while loop

{
	int i=1,n;
	printf("Enter the Element:");
	scanf("%d",&n);
	do 
	{
		printf("%d\t",i);
		i*=2;
	}
	while(i<=n);
	
	return 0;
}
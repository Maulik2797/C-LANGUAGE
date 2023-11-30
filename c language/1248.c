#include<stdio.h>
int main()
{
	int i,n,k=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",k);
		k= k*2;
	}
	return 0;
}
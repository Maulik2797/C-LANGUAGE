#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			printf("%d\n",i);
		}
		if(i%2==0)
		{
			printf("%d\n",i*i);
		}
	}
	return 0;
}
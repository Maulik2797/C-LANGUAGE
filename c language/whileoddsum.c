#include<stdio.h>
int main()
{
	int i=1,sum=0,n;
	printf("enter thr element:");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==1)
		{
			sum = sum+i;
		}i++;
	}
	printf("%d",sum);
	return 0;
}
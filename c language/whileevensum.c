#include<stdio.h>
int main()
{ 	// print 2,4,6,...,n total.
	int i=1,sum=0,n;
	printf("Enter thr Element:");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{
			sum =sum+i;
		}i++;
	}
	printf("%d",sum);
	return 0;
}
#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("Enter the Element:");
	scanf("%d",&n);
	do
	{
		if(i%2==1)
		{
			sum=sum+i;
		}i++;
	}
	while(i<=n);
	printf("%d\t",sum);
	return 0;
}
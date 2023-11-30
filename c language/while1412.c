#include<stdio.h>
int main()
{
	int i=1,n,temp=1,num;
	printf("Enter the number");
	scanf("%d",&n);
	while(i<=n)
	{
		num = i*temp;
		temp*=2;
		printf("%d,\t",num);
		i++;
	}
	return 0;
}

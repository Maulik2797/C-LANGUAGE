#include<stdio.h>
int main()
{
	int i,n,temp=1,num;
	printf("Enter the Element:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		num = i*temp;
		temp*=2;
		printf("%d,\t",num);
		
	}return 0;
}
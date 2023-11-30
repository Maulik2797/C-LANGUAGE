#include<stdio.h>
int main()
{
	char arr[10];
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%c",&arr[i]);
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("%c",arr[i]);
	}
	return 0;
}
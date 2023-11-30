#include<stdio.h>
int main()
{
	int arr[5],i,j;
	for(i=0;i<5;i++)
	{
		printf("Enter the array value [%d]",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("The array %d",arr[i]);
	}
	
}
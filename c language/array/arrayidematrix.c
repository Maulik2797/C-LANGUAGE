#include<stdio.h>
/*
	 2
	5 2
	59	*/
int main()
{
	int arr[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the value of arr[%d][%d]",i,j);
			scanf("%d",&arr[i][j]);
		}
	printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i][j]==0)
			{
				printf(" ");
			}
			else
			{
				printf("%d",arr[i][j]);
			}
			
		}
	printf("\n");
	}
	return 0;
}

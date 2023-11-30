#include<stdio.h>
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
		
	}	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(1<arr[i][j])
			{
				arr[i][j]=0;
				printf("%d",arr[i][j]);
			}
		}printf("\n");
	}
		
	
	return 0;
}
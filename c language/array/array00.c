#include<stdio.h>
int main()
{
	int arr1[3][3],arr2[3][3],arr3[3][3],i,j,sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the Array1[%d][%d]",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
		printf("\n");
		
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the Array2[%d][%d]",i,j);
			scanf("%d",&arr2[i][j]);
		}
	}
	
		printf("\n");
		
	
	for(i=0;i<3;i++)
	{	
		for(j=0;j<3;j++)
		{
			arr3[i][j] = arr1[i][j] + arr2[i][j];
		    printf("The array3[%d][%d] = %d\n",i,j,arr3[i][j]);
		}
	}
	return 0;
	
}
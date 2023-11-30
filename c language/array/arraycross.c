#include<stdio.h>
int main()
/*	
	1 2 3    
	4 5 6
	7 8 9		*/
{
	int arr[3][3],i,j,sum1,sum2,sum3,sum4,sum5,sum6;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Ente the arr value arr[%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
		}
		
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	sum1 = arr[0][0] + arr[0][1] + arr[0][2];
	printf("The first line sum is %d\n",sum1);
	
	sum2 = arr[1][0] + arr[1][1] + arr[1][2];
	printf("The second line sum is %d\n",sum2);
	
	sum3 = arr[2][0] + arr[2][1] + arr[2][2];
	printf("The third line sum is %d\n",sum3);
	
	sum4 = arr[0][0] + arr[1][1] + arr[2][2];
	printf("The first cross sum is %d\n",sum4);
	
	sum5 = arr[2][0] + arr[1][1] + arr[0][2];
	printf("The secind cross sum is %d\n",sum5);
	
	sum6 = sum1 + arr[1][2] + arr[2][2];
	printf("The two sum is %d\n",sum6);
	return 0;
	
}
/*
	output = 
	1 2 3
	4 5 6
	7 8 9
	The first line sum is 6
	The second line sum is 15
	The third line sum is 24
	The first cross sum is 15
	The secind cross sum is 15
	The two sum is 21
*/
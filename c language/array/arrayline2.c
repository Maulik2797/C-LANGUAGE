#include<stdio.h>
int main()
{
	int arr[3][3],i,j,sum1,sum2,sum3;for(i=0;i<3;i++)
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
	
	sum1 = arr[0][0] + arr[1][0] +arr[2][0];
	printf("the first line sum is %d\n",sum1);
	
	sum2 = arr[0][1] + arr[1][1] +arr[2][1];
	printf("the second line sum is %d\n",sum2);
	
	sum3 = arr[0][2] + arr[1][2] +arr[2][2];
	printf("the third line sum is %d\n",sum3);
	
	return 0;
	
}
/*
	output =

	1 2 3
	4 5 6
	7 8 9
	the first line sum is 12
	the second line sum is 15
	the third line sum is 18
*/
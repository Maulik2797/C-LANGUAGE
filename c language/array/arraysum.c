#include<stdio.h>
int main()
{
	int arr1[2],arr2[2],arr3[2],i,j;
	for(i=0;i<2;i++)
	
		{
			printf("Enter the Array1[%d]",i);
			scanf("%d",&arr1[i]);
		}
		printf("\n");
	for(i=0;i<2;i++)
	
		{
			printf("Enter the Array2[%d]",i);
			scanf("%d",&arr2[i]);
		}
		printf("\n");
	
	for(i=0;i<2;i++)
	{
		arr3[i] = arr1[i] + arr2[i];
		printf("arr3[%d] = %d\n",i,arr3[i]);
	}
	
	return 0;
	
}
#include <stdio.h>
int main()
{
	int arr1[3][3], i, j, count = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Enter the array value arr[%d][%d]", i, j);
			scanf("%d", &arr1[i][j]);
		}
	}
	printf("\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (0 < arr1[i][j])
			{
				printf("the matrix value in memory is %d\n", arr1[i][j]);
			}
			else
			{
				count++;
			}
		}
	}
	printf("\n");

	printf("The zero(0) is in memory = %d", count);

	return 0;
}
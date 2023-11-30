#include <stdio.h>

int main()
{
	int i,j,k=1,a[10],count=1,temp;
	
	for(i=0;i<10;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=k;j<10;j++)
		{
			if(a[i]>a[j])
			{
				temp= a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		k++;
	}
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");

	for(i=0;i<9;i++)
	{			
			if(a[i]==a[i+1])
			{
				count++;
				//printf("%d",count);
			}else{
			printf("%d is %d times in array\n",a[i],count);
			count=1;
			}
			
		//k++;
	}
	printf("%d is %d times in array\n",a[i],count);
return 0;
}
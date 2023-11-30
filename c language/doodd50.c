#include<stdio.h>
int main()
	// print odd number using do while 
	// 1	3	5	7	9.....	50
{
	int i=1;
	do 
	{
		if(i%2==1)
		{
			printf("%d\t",i);
			
		}i++;	
	}
	
	while(i<=50);
	
	return 0;
}
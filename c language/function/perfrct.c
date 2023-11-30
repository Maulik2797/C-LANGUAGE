#include <stdio.h>

int PerfectNumber(int num) 
{
    int sum = 1;
    for (int i=2;i<=num/2;i++)
    {
        if (num%i==0)
		{
            sum+=i;
        }
    }
    return (sum==num);
}
int main() 
{
    int num ;
	printf("Enter the value :");
	scanf("%d",&num);
    if (PerfectNumber(num)) 
	{
        printf("%d is a perfect number .\n", num);
    }              
	else
	{
        printf("%d Is a not perfect number.\n", num);
	}
    
}
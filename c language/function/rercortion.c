#include<stdio.h>
int factorial(int n)
{
	int a;
	a = n * factorial(n-1);
	return a;
}
int main()
{	
	int i;
	i = factorial();
	printf("%d\n",i);
}
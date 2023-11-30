#include<stdio.h>
 int fibonaci()
{
	int i,a=0,b=1,c,n;
	printf("Enter the Element:");
	scanf("%d",&n);
	printf("%d\t",b);
	for(i=1;i<n;i++)
	{
		c=a+b;
		printf("%d\t",c);
		
		a=b;
		b=c;
	}
	printf("\n");
}
int fact(int n)
{
	return n>0?n*fact(n-1):1;
}
int main()
{
	int n,ans;
	printf("Enter the value of number");
	scanf("%d",&n);
	ans = fact(n);
	printf("Factorial of %d is %d\n",n,ans);
	
	fibonaci();
}
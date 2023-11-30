#include<stdio.h>
int largeno(int x, int y) // with argument no return
{
	printf("%d is largest no \n",x>y?x:y);
}
int multiply(int x, int y)
{
	printf("The multiply is x and y is %d:\n",x*y);
}
int sum(int x,int y,int z)
{
	printf("The sum is %d\n",x+y+z);
}
int loop(int i, int j) 
{
	//int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d",i);
		}printf("\n");
	}
}
int main()
{
	int x,y,a,b,i,j,k,l,m;
	printf("Enter the a and b:\n");
	scanf("%d%d",&x,&y);
	//printf("%d is largest",x>y?x:y);
	largeno(x,y);
	printf("Enter the a and b :\n");
	scanf("%d%d",&a,&b);
	multiply(a,b);
	printf("Enter the a and b :\n");
	scanf("%d%d%d",&i,&j,&k);
	sum(i,j,k);
	loop(l,m);
}
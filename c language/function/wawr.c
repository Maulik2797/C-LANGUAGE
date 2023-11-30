#include<stdio.h>
int product(int x,int y)
{
	return x * y;
}
int substract(int x,int y)
{
	return x - y;
}
int sum(int x,int y)
{
	return x + y;
}
int reverse() 
{

  int n, i = 0, j;

  printf("Enter an integer: ");
  scanf("%d", &n);

  while (n != 0) {
    j = n % 10;
    i = i * 10 + j;
    n /= 10;
  }

  return i;
}
int main()
{
	int a,b;
	printf("Enter the a and b:\n");
	scanf("%d%d",&a,&b);
	printf("The product of a and b: %d\n",product(a,b));
	int x,y;
	printf("Enter the a and b:");
	scanf("%d%d",&x,&y);
	printf("The product of a and b: %d\n",substract(x,y));
	int i,j;
	printf("Enter the a and b:");
	scanf("%d%d",&i,&j);
	printf("The product of a and b: %d\n",sum(i,j));
	int z;
	printf("%d",reverse(i));
	
}
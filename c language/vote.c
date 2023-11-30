#include<stdio.h>
#include<conio.h>
int main()
{
    // check for eligible for vote.
    int a;
	scanf("%d",&a);
	if(a>=18)
	{
		printf("You are a eligible for vote.");
	}
	else
	{
		printf("You are a not eligible for vote.");
	}
	return 0;
}
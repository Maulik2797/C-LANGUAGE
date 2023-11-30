#include<stdio.h>
#include<conio.h>
int main()
{
    //check a given year is a leap year or not.
    int a;
    scanf("%d",&a);
	if(a%4==0)
	{
	    printf("%d This year is leap year.",a);
	}
	else
	{
	    printf("%d this year is not leap year.",a);
	}
	return 0;
}
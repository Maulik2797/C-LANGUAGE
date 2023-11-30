#include<stdio.h>
#include<conio.h>
int main()
{ 
    // check the hight wise catogery.
	int height;
	scanf("%d",&height);
	if(height<=135)
	{
		printf("Your height is %d you are a Dwarf.",height);
	}
	else if(height<=150)
	{
	    printf("Your height is %d you are a average.",height);
	}
	else
	{
	    printf("Your height is %d you are a tall.",height);
	}
	return 0;
} 
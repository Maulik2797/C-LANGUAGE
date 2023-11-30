#include<stdio.h>
int loop() // loop function no argument with no return.
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d",i);
		}printf("\n");
	}
}
int plus() // addition function no argument with return.
{
	int a,b;
	printf("Enter the a & b :");
	scanf("%d%d",&a,&b);
	return a+b;
}
int multiply() // multiply function no argument with return.
{
	int a,b;
	printf("Enter the value of a & b:");
	scanf("%d%d",&a,&b);
	return a*b;
}
int array() // array function
{
		int arr[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the array a[%d][%d]",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
int substract() // substract function no argument with return.
{
	int a,b;
	printf("Enter the value of a & b :");
	scanf("%d%d",&a,&b);
	return a-b;
}
int division() // division function no argument with return.
{
	int a,b;
	printf("Enter the value of a & b :");
	scanf("%d%d",&a,&b);
	printf("The division is %d\n",a/b);
}

int main()
{
	printf("What is your name :\n");
	loop();
	int x=plus();
	printf("The addition is %d\n",x);
	printf("Your name is maulik\n");
	int y=multiply();
	printf("The multiply is %d\n",y);
	array();
	int a = substract();
	printf("The substract is %d\n",a);
	division();
}

/*
	output = 
	
	What is your name :
	11111
	22222
	33333
	44444
	55555
	Enter the a & b :10
	10
	The addition is 20
	Your name is maulik
	Enter the value of a & b:10
	10
	The multiply is 100
	Enter the array a[0][0]1
	Enter the array a[0][1]2
	Enter the array a[0][2]3
	Enter the array a[0][3]4
	Enter the array a[0][4]5
	Enter the array a[1][0]6
	Enter the array a[1][1]7
	Enter the array a[1][2]8
	Enter the array a[1][3]9
	Enter the array a[1][4]10
	Enter the array a[2][0]11
	Enter the array a[2][1]12
	Enter the array a[2][2]13
	Enter the array a[2][3]14
	Enter the array a[2][4]15
	Enter the array a[3][0]16
	Enter the array a[3][1]17
	Enter the array a[3][2]18
	Enter the array a[3][3]19
	Enter the array a[3][4]20
	Enter the array a[4][0]21
	Enter the array a[4][1]22
	Enter the array a[4][2]23
	Enter the array a[4][3]24
	Enter the array a[4][4]25
	1 2 3 4 5
	6 7 8 9 10
	11 12 13 14 15
	16 17 18 19 20
	21 22 23 24 25	
	Enter the value of a & b :20
    10
	The substract is 10 
	Enter the value of a & b :30
	5
	The division is 6 
*/	
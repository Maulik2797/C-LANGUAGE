#include<stdio.h>
int fibonaci()
{
	int i,a=0,b=1,c,n;
	printf("Enter the Element:");
	scanf("%d",&n);
	printf("%d,\t",b);
	for(i=1;i<n;i++)
	{
		c=a+b;
		printf("%d\t",c);
		
		a=b;
		b=c;
	}
	printf("\n");
}
int week()
{
	int day=5;
	switch(day)
	{
		case 1:
		printf("monday\n");
		break;
		
		case 2:
		printf("thuesday\n");
		break;
		
		case 3:
		printf("wenesday\n");
		break;
		
		case 4:
		printf("Thuersday\n");
		break;
		
		case 5:
		printf("friday\n");
		break;
		
		case 6:
		printf("saturday\n");
		break;
		
		case 7:
		printf("sunday\n");
		break;
		
		default:
		printf("Not valid days");
		
	}
}
int main()
{
	fibonaci();
	week();
}
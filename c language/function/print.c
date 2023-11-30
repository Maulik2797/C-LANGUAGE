#include<stdio.h>
int print()
{
    int x = 5;
    float y = 15.7;
    char z = 'a';
    char a = '1';
    return a;

}
int pattern()
{ 
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=4;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
int print1() // print return value
{
	int i;
    int x = 5;
    float y = 15.7;
    char z = 'a';
    char a = '1';
	i = x + y;
    return i;

}
int gst() // calculate gst
{
    int rate = 50;
    int qty = 200;
    int amount;
    
    amount = (rate*qty);
    printf("%d\n",amount);

    int dis;
    dis = (amount *0.05);
    printf("%d\n",dis);

    int billmat;
    billmat = (amount-dis);
    printf("%d\n",billmat);

    int gst;
    gst = (billmat*18)/100;
    printf("%d\n",gst);

    int netbill;
    netbill = (billmat+gst);
    printf("%d\n",netbill);
	return gst;
}
int electricity()
{
   int units,totalbill,finalbill;
   printf("Enter the units");
   scanf("%d",&units);
   if(units<=100)
   {
      totalbill=100*0.60;
   }
   else if(units<=300)
   {
      totalbill=100*0.60+(units-100)*0.80;
   }
   else
   {
       totalbill =(100*0.60)+(200*0.80)+(units-300)*0.90;
   }
   if(totalbill<50)
   {
      totalbill = 50;
   }
   else if(totalbill>300)
   {
       totalbill=(totalbill+(totalbill*0.15));
   }
   printf("Your electricity bill is %d\n",totalbill);

}
int sum()
{
	int i=1,n,sum=0;
	printf("Enter the Element:\n");
	scanf("%d",&n);
	do
	{
		if(i%2==0)
		{
			sum=sum+i;
		}i++;
	}
	while(i<=n);
	printf("%d\t",sum);
}

int main()
{
	int a = print();
	printf("%c\n",a);
	pattern();
	float i = print1();
	printf("%f\n",i);
	int r = gst();
	printf("%d\n",r);
	electricity();
	sum();
}
/*
1
    *
   **
  ***
 ****
*****
20.000000
10000
500
9500
1710
11210

D:\maulik\function>gcc print.c -o print

D:\maulik\function>print
1
    *
   **
  ***
 ****
*****
20.000000
10000
500
9500
1710
11210
1710

*/
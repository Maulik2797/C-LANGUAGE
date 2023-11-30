#include<stdio.h>
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
int pattern1()
{
	int i=1,j;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
}
int cvalue()
{
   int a,b,c;
   scanf("%d %d\n",&a,&b);
   c = a>b;
   printf("%d",c);
   
}
int evensum()
{
int i,n,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
		sum = sum + i;
		}
	}
	printf("%d",sum);
}
/*int stringadd()
{
	char str1[6]="Skill",str2[5]="qode",str3[10]
	int i=0,j;

	for(i=0;str1[i]!='\0';i++)
	{
		
		str3[i] = str1[i];
	}
	
	str3[i]=' ';
	//i++;
	//n = strlen(str1);
	for(j=i;str2[j]!='\0';j++)
	{
		
		str3[i]= str2[j];
	}
	
	/*for(i=0;i<10;i++)
	{
		str3[i] = str1[i]+ str2[j];
	}*/
	/*printf("The str3 is %c",str3[i]);
} */
int pattern2()
{
	int i,j,k=65;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%c,\t",k++);
		}
		printf("\n");
	}

}
int arraycross()

{
	int arr[3][3],i,j,sum1,sum2,sum3,sum4,sum5,sum6;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Ente the arr value arr[%d][%d]:",i,j);
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
	sum1 = arr[0][0] + arr[0][1] + arr[0][2];
	printf("The first line sum is %d\n",sum1);
	
	sum2 = arr[1][0] + arr[1][1] + arr[1][2];
	printf("The second line sum is %d\n",sum2);
	
	sum3 = arr[2][0] + arr[2][1] + arr[2][2];
	printf("The third line sum is %d\n",sum3);
	
	sum4 = arr[0][0] + arr[1][1] + arr[2][2];
	printf("The first cross sum is %d\n",sum4);
	
	sum5 = arr[2][0] + arr[1][1] + arr[0][2];
	printf("The secind cross sum is %d\n",sum5);
	
	sum6 = sum1 + arr[1][2] + arr[2][2];
	printf("The two sum is %d\n",sum6);
	return 0;
	
}
int main()
{
	printf("Maulik\n");
	pattern();
	pattern1();
	//cvalue();
	evensum();
	//stringadd();
	pattern2();
	arraycross();
	
	
}
 /*
	output=
	Maulik
    *
   **
  ***
 ****
*****
*
**
***
****
*****
20
110A,   B,      C,      D,      E,
F,      G,      H,      I,      J,
K,      L,      M,      N,      O,
P,      Q,      R,      S,      T,
U,      V,      W,      X,      Y,
Ente the arr value arr[0][0]:1
Ente the arr value arr[0][1]:2
Ente the arr value arr[0][2]:3
Ente the arr value arr[1][0]:4
Ente the arr value arr[1][1]:5
Ente the arr value arr[1][2]:6
Ente the arr value arr[2][0]:7
Ente the arr value arr[2][1]:8
Ente the arr value arr[2][2]:9
1 2 3
4 5 6
7 8 9
The first line sum is 6
The second line sum is 15
The third line sum is 24
The first cross sum is 15
The secind cross sum is 15
The two sum is 21 
	*/
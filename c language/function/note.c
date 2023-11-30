#include<stdio.h>
int note()
{
   int amt,total,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0;
   printf("Enter the amount");
   scanf("%d",&amt);
   if(amt>=500)
   {
       a =amt/500;
       amt =amt%500;
   }
   if(amt>=100)
   {
      b =amt/100;
      amt =amt%100;
   }
   if(amt>=50)
   {
      c =amt/50;
      amt =amt%50;
   }
   if(amt>=20)
   {
      d =amt/20;
      amt =amt%20;
   }
   if(amt>=10)
   {
      e =amt/10;
      amt =amt%10;
   }
   if(amt>=5)
   {
      f =amt/5;
      amt =amt%5;
   }
   if(amt>=2)
   {
      g=amt/2;
      amt =amt%2;
   }
   if(amt>=1)
   {
      h=amt/1;
      amt =amt%1;
   }
   printf("There are notes of 500 is %d\n",a);
   printf("There are notes of 100 is %d\n",b);
   printf("There are notes of 50 is %d\n",c);
   printf("There are notes of 20 is %d\n",d);
   printf("There are notes of 10 is %d\n",e);
   printf("There are notes of 5 is %d\n",f);
   printf("There are notes of 2 is %d\n",g);
   printf("There are notes of 1 is %d\n",h);
}
int main()
{
	note();
}
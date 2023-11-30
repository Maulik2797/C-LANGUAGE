#include<stdio.h>
struct customer
{
    int billno;
    char name[50];
    float totalbill;
};
int main ()
{
    struct customer c1,c2,c3,c4,c5;
    float gst;

   printf("Enter The customer billno is =");
   scanf("%d",&c1.billno);
   printf("The bill no is %d\n",c1.billno);
   printf("Enter The customer name is =");
   scanf("%s",&c1.name);
   printf("The name is %s\n",c1.name);
   printf("Enter The customer totalbill is =");
   scanf("%f",&c1.totalbill);
   gst = c1.totalbill + (c1.totalbill * 0.05);
   printf("The totalbill is %f\n",gst);

    printf("Enter The customer billno is =");
   scanf("%d",&c2.billno);
   printf("The bill no is %d\n",c2.billno);
   printf("Enter The customer name is =");
   scanf("%s",&c2.name);
   printf("The name is %s\n",c2.name);
   printf("Enter The customer totalbill is =");
   scanf("%f",&c2.totalbill);
   gst = c2.totalbill + (c2.totalbill * 0.05);
   printf("The totalbill is %f\n",gst);

    printf("Enter The customer billno is =");
   scanf("%d",&c3.billno);
   printf("The bill no is %d\n",c3.billno);
   printf("Enter The customer name is =");
   scanf("%s",&c3.name);
   printf("The name is %s\n",c3.name);
   printf("Enter The customer totalbill is =");
   scanf("%f",&c3.totalbill);
   gst = c3.totalbill + (c3.totalbill * 0.05);
   printf("The totalbill is %f\n",gst);

    printf("Enter The customer billno is =");
   scanf("%d",&c4.billno);
   printf("The bill no is %d\n",c4.billno);
   printf("Enter The customer name is =");
   scanf("%s",&c4.name);
   printf("The name is %s\n",c4.name);
   printf("Enter The customer totalbill is =");
   scanf("%f",&c4.totalbill);
   gst = c4.totalbill + (c4.totalbill * 0.05);
   printf("The totalbill is %f\n",gst);

    printf("Enter The customer billno is =");
   scanf("%d",&c5.billno);
   printf("The bill no is %d\n",c5.billno);
   printf("Enter The customer name is =");
   scanf("%s",&c5.name);
   printf("The name is %s\n",c5.name);
   printf("Enter The customer totalbill is =");
   scanf("%f",&c5.totalbill);
   gst = c5.totalbill + (c5.totalbill * 0.05);
   printf("The totalbill is %f\n",gst);

}
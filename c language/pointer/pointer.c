#include<stdio.h>
int main()
{
    int num = 11;
    int* ptr = num;
    int** p = ptr;
    int **a = p;

    printf("value of mynum is %d\n",num);
    printf("address of mynum is %p\n",&num);

    printf("address of ptr is %p\n",ptr);
    printf("address of p is %p\n",p);
    printf("address of a is %p",a);
    
     return 0;
}
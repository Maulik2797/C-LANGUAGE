#include<stdio.h>
int main()
{
    int i=1;
    while(i<=15)
    {
        if (i==10)
        {
            continue;
        }
        printf("%d\t",i++);
    }
}
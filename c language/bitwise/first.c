#include<stdio.h>
int main()
{
    int a = 5;
    int b = 4;

    printf("Bitwise and of a & b = %d\n",a&b);
    printf("Bitwise and of a | b = %d\n",a|b);
    printf("Bitwise and of a | b = %d\n",~b);
    printf("Bitwise and of a | b = %d\n",~a);
    printf("Bitwise and of a | b = %d\n",a^b);
    printf("Bitwise and of a | b = %d\n",a>>3);
    printf("Bitwise and of a | b = %d\n",a<<2);
    printf("Bitwise and of a | b = %d\n",b>>2);
    printf("Bitwise and of a | b = %d\n",b<<2);
}
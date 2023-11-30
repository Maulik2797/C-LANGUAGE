#include <stdio.h>

int myfun() {
    int num;
    
    printf("Enter an number : ");
    scanf("%d", &num);

    if (num < 0) {
        goto negative;
    }

    if (num % 2 == 1) 
    {
        goto odd;
    }else 
    {
        goto even;
    }

negative:
    printf("The number is negative.\n");
    goto end;

even:
    printf("The number is even.\n");
    goto end;

odd:
    printf("The number is odd.\n");

end:
    return 0;
}
int main()
{
    myfun();
}
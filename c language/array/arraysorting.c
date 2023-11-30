#include <stdio.h>
int main()
{

    int a[10];
    int temp, i, j;
    for (i = 0; i < 10; i++)
    {
        printf("Enter the element ");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nSorting ");
    for (i =0; i <10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
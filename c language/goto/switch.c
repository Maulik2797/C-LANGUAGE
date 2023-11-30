#include <stdio.h>
int main()
{
    int day;
    printf("Enter the number between 1 to 7\n");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Sunday");
        break;

    case 2:
        printf("Monday");
        break;
  
    case 3:
        printf("Tuesday");
        break;

    case 4:
        printf("Wenesday");
        break;

    case 5:
        printf("Thurseday");
        break;

    case 6:
        printf("Friday");
        break;

    case 7:
        printf("Saturday");
        break;

    default:
        printf("Non of this day");
        break;
    }
}
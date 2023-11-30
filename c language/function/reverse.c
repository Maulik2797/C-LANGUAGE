#include <stdio.h>

int reverse() 
{

  int n, i = 0, j;

  printf("Enter an integer: ");
  scanf("%d", &n);

  while (n != 0) {
    j = n % 10;
    i = i * 10 + j;
    n /= 10;
  }

  return i;
}
int main()
{
	int i;
	printf("The reverse number is %d\n",reverse(i));
}
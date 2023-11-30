#include <stdio.h>

int main() {
  int i,n ,f = 1;

  printf("Enter a number: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    f *= i;
  }

  printf("The factorial of %d is %d.\n", n, f);

  return 0;
}
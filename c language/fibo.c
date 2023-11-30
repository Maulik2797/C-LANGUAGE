#include <stdio.h>

int main() {
  int n, a = 0, b = 1, c, i;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("Fibonacci Series: ");
  for (i = 1; i < n; i++) {
    
    if (i == 1)
	{
      printf("%d ", b);
	}
    else {
      c = a + b;
      printf("%d ", c);
      a = b;
      b = c;
    }
  }
  return 0;
}
#include<stdio.h>
int main()
	// print A = a using do while loop
{
	int i=1,k=65;
	do 
	{
		printf("%c = %c\t",k,k+32);
		k++;
		printf("\n");
		
	}
	while(k<=90);
	return 0;
}
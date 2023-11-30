#include <stdio.h>
#include<string.h>

int main() 
{
	char str1[12]="skill ", str2[10]="qode";
	int i,j;

	for(i=0;str1[i]!='\0';i++);
	for(j=0;str2[j]!='\0';j++) 
	{
		str1[i++] = str2[j];
	}
	str1[i] ='\0';
	printf("The merged string is: %s\n", str1);
	return 0;
}
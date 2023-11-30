#include <stdio.h>
#include<string.h>

int main() 
{
	char str1[12],str2[10];
	int i,j;
	printf("Enter the string 1");
	gets(str1);
	printf("Enter the string 2");
	gets(str2);

	for(i=0;str2[i]!='\0';i++);
	for(j=0;str1[j]!='\0';j++) 
	{
		str2[i++] = str1[j];
	}
	str1[i] ='\0';
	printf("The merged string swap is: %s\n", str2);
	return 0;
}
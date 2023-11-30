#include<stdio.h>
#include<string.h>
int main()
{
	char a[8]="Maulik \0";
	char b[8]="Maulik \0";
	char c[]="hello\0";
	
	printf("%d",strcmp(a,b));
	
	return 0;
}
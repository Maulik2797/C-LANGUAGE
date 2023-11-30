#include<stdio.h>
#include<string.h>
int main()
{
	char str[10],len;
	int i,j;
	printf("Enter your name:");
	scanf("%s",&str);
	
	len = strlen(str);
	printf("%d\n",len);
	
	for(i=0;i<len;i++)
	{
		printf("%c",str[i]);
		printf("%c\t",str[(len-1)-i]);
	}
	if(len%2!=0)
	{
		printf("%c\t",str[i]);
	}
	
	return 0;
}

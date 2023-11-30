#include<stdio.h>
//#include<string.h>
int main()
{
	char str[15];
	printf("Enter the string:\n");
	//scanf("%[^\n]s",str);
	gets(str);
	printf("Your string is:%s\n",str);
	//puts(str);
	int i;
	for(i=0;str[i]!='\0';i++);
	printf("Your string lenth is : %d",i);
	return 0;
}
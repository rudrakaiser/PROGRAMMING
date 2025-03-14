#include<stdio.h>
#include<string.h>
int main()
{
	int i, count=0;
	char str[100];
	gets(str);
	for(i=0; str[i]!='\0'; i++) count++;
	printf("String Length = %d",count);
	return 0;
}

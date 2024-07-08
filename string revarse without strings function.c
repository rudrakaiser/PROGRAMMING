#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str[100];
	gets(str);
	for(i=strlen(str)-1; i>=0; i--)
	{
		putchar(str[i]);
	}
	return 0;
}

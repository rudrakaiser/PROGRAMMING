#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	gets(str);
	if(str[strlen(str)-1]%2==0) printf("Even");
	else printf("Odd");
	return 0;
}

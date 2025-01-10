#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	gets(str);
	int i, one = 0, zero = 0;
	for(i=0; i<strlen(str); i++)
	{
		if(str[i]=='1') one++;
		else zero++;
	}
	printf("One = %d\nZero = %d", one, zero);
	return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	gets(str);
	int check=0, i;
	for(i=strlen(str)-1; i>=0; i--)
	{
		if(check==0)
		{
			if(str[i]=='1') check++;
		}
		else
		{
			if(str[i]=='1') str[i] = '0';
			else str[i] = '1';
		}
	}
	puts(str);
	return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
	char temp, str[100];
	gets(str);
	strupr(str);
	int i, j;
	for(i=0; i<strlen(str); i++)
	{
		for(j=0; j<strlen(str); j++)
		{
			if(str[i]<str[j])
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
	puts(str);
	return 0;
}

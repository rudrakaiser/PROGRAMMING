#include<stdio.h>
#include<string.h>
int main()
{
	int i, j, p=0, q=0;
	char str1[100];
	gets(str1);
	for(i=0; str1[i]!='\0'; i++) q++;
	char str2[q];
	for(i=q-1, j=0; i>=0; i--, j++)
	{
		str2[i] = str1[j];
	}
	for(i=0; i<q; i++)
	{
		if(str1[i]==str2[i]) p++;
		else break;
	}
	if(p==q) printf("Yes");
	else printf("No");
	return 0;
}

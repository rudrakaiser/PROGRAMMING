#include<stdio.h>
#include<string.h>
int main()
{
	int i, carry=0;
	char bin1[100], bin2[100], bin[100];
	gets(bin1);
	gets(bin2);
	for(i=strlen(bin1)-1; i>=0; i--)
	{
		if(carry==0)
		{
			if(i==strlen(bin1)-1) bin[i+2] = '\0';
			if(bin1[i]=='0' && bin2[i]=='0') bin[i+1] = '0';
			else if((bin1[i]=='0' && bin2[i]=='1') || (bin1[i]=='1' && bin2[i]=='0')) bin[i+1] = '1';
			else if(bin1[i]=='1' && bin2[i]=='1')
			{
				bin[i+1] = '0';
				carry = 1;
			}
		}
		else
		{
			if(bin1[i]=='0' && bin2[i]=='0')
			{
				bin[i+1] = '1';
				carry = 0;
			}
			else if((bin1[i]=='0' && bin2[i]=='1')||(bin1[i]=='1' && bin2[i]=='0')) bin[i+1] = '0';
			else if(bin1[i]=='1' && bin2[i]=='1') bin[i+1] = '1';
		}
	}
	if(carry==1) bin[0] = '1';
	else bin[0] = '0';
	puts(bin);
	return 0;
}

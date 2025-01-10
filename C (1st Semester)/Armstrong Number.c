#include<stdio.h>
#include<math.h>
int main()
{
	int test_case, i;
	scanf("%d",&test_case);
	for(i=1; i<=test_case; i++)
	{
		unsigned int num, temp, count_for_n, digit, sum;
		count_for_n = sum = 0;
		scanf("%d",&num);
		temp = num;
		while(temp!=0)
		{
			count_for_n++;
			temp = temp/10;
		}
		temp = num;
		while(temp!=0)
		{
			digit = temp%10;
			digit = pow(digit,count_for_n);
			sum = sum + digit;
			temp = temp/10;
		}
		if(num==sum) printf("Case %d: Yes\n",i);
		else printf("Case %d: No\n",i);
	}
	return 0;
}

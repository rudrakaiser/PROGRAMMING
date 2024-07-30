#include<stdio.h>
int main()
{
	int ac, ib, uc, b;
	scanf("%d %d", &ac, &ib);
	while(1)
	{
		printf("1. Credit\n2. Debit/Withdraw\n3. Exit\n");
		scanf("%d", &uc);
		if(uc==1)
		{
			scanf("%d", &b);
			ib = ib + b;
		}
		else if(uc==2)
		{
			scanf("%d", &b);
			ib = ib - b;
		}
		else
		{
			printf("Your Current Balance is: %d Taka",ib);
			break;
		}
	}
	return 0;
}

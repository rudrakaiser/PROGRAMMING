#include<stdio.h>
#include<math.h>
int main()
{
	int test_case, i;
	scanf("%d",&test_case);
	for(i=1; i<=test_case; i++)
	{
		int ID;
		scanf("%d",&ID);
		if(ID%2==0)
		{
			printf("%d\n",(((ID%10)*(ID%10))+(ID/1000)));
		}
		else
		{
			printf("%d\n",((((ID/10)%10)*((ID/10)%10))+(ID/1000)));
		}
	}
	return 0;
}

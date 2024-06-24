#include<stdio.h>
int main()
{
    int n, i, j, sum, a;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
    	sum=0;
    	a=0;
		for(j=1; j<=5; j++)
    	{
    		scanf("%d",&a);
    		sum+=a;
		}
		printf("Student %d : %d\n",i, sum);
	}
    return 0;
}

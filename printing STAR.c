#include<stdio.h>
int main()
{
	int n=11, i, j;
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			if(i==1 || i==n || j==1 || j==n || i==j || i==(n/2)+1 || j==(n/2)+1 || i-1==n-j) printf("* ");
			else printf("  ");
		}
		
		printf("\n");
	}
	
	return 0;
}
#include<stdio.h>
int main()
{
	int n, row, col, space;
	
	printf("Enter rows Number : ");
	scanf("%d", &n);
	
	for(row=1; row<=n; row++)
	{
		for(space=1; space<=(n-row); space++)
		{
			printf("  ");
		}
		
		for(col=1; col<=row; col++)
		{
			printf("* ");
		}
		
		printf("\n");
	}
	return 0;
}

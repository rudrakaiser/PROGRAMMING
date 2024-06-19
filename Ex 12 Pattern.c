#include<stdio.h>
int main()
{
	int n, row, col, space;
	
	printf("Enter Lines Number : ");
	scanf("%d", &n);
	
	for(row=1; row<=n; row++)
	{
		for(space=1; space<row; space++)
		{
			printf("  ");
		}
		
		for(col=1; col<=(n-row)+1; col++)
		{
			printf("%d ", col);
		}
		
		printf("\n");
	}
	
	return 0;
}

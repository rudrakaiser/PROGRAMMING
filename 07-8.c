#include<stdio.h>

int main()
{
	int n, loop_1, loop_2;
	
	printf("Enter the size : ");
	scanf("%d", &n);
	
	printf("\n");
	
	for(loop_1=1; loop_1<=n; loop_1++)
	{
		for(loop_2=1; loop_2<=n; loop_2++)
		{
			if(loop_1==1 || loop_1==n || loop_2==1 || loop_2==n)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		
		printf("\n");
	}

	return 0;
}

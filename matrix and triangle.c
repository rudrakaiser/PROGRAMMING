#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of square matrix, N = ");
    scanf("%d",&n);
    int a[n][n], i, j;
    
    for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Matrix [%d] [%d] = ", i, j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nThe Matrix Is\n\n");
    
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%02d  ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n1st Triangle\n\n");
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i>j)
			{
				printf("%02d  ",a[i][j]);
			}
		}
		printf("\n");
	}
	
	printf("\n2nd Triangle\n\n");
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i<j)
			{
				printf("%02d  ",a[i][j]);
			}
			else
			{
				printf("    ",a[i][j]);
			}
		}
		printf("\n");
	}
	
	printf("\n3rd Triangle\n\n");
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i<n-j-1)
			{
				printf("%02d  ",a[i][j]);
			}
			else
			{
				printf("    ",a[i][j]);
			}
		}
		printf("\n");
	}
	
	printf("\n4th Triangle\n\n");
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i>n-j-1)
			{
				printf("%02d  ",a[i][j]);
			}
			else
			{
				printf("    ",a[i][j]);
			}
		}
		printf("\n");
	}
	
	return 0;
}

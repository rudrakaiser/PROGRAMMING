#include<stdio.h>
int main()
{
    int n, i, j, space, k=1;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(space=1; space<=(n-i); space++)
        {
            printf("  ");
        }
		for(j=1; j<=k; j++)
		{
			printf("* ");
		}
        printf("\n");
        k+=2;
    }
    return 0;
}

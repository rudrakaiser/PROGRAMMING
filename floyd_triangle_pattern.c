#include<stdio.h>
int main()
{
    int n, i, j, a=1;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; a++,j++)
        {
            printf("%d ",a);
        }
        printf("\n");
    }
    return 0;
}

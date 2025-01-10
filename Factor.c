#include<stdio.h>
int main()
{
    int n, i, count=0;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Factors of %d : ",n);
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            count++;
        }
    }
    printf("\nThere are %d factor", count);
    return 0;
}
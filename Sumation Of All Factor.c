#include<stdio.h>
int main()
{
    int n, i, sum=0;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Factors of %d : ",n);
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            sum += i;
        }
    }
    printf("\nSum of all factor is : %d", sum);
    return 0;
}
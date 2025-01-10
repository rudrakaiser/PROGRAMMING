#include<stdio.h>
int main()
{
    int n, i, sum=0;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(i=1; i<=(n/2); i++) if(n%i==0) sum += i;
    if(n==sum) printf("%d is a PERFECT number", n);
    else printf("%d is NOT a PERFECT number", n);
    return 0;
}
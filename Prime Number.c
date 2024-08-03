#include<stdio.h>
int main()
{
    int n, i, count=0;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(i=2; i<(n/2); i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0) printf("Prime number");
    else printf("Not a prime number !");
    return 0;
}
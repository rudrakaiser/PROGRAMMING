#include<stdio.h>
int main()
{
    int n1, n2, rem;

    printf("Number 1 = ");
    scanf("%d", &n1);
    printf("Number 2 = ");
    scanf("%d", &n2);

    if(n2>n1)
    {
        n1 = n1 + n2;
        n2 = n1 - n2;
        n1 = n1 - n2;
    }

    while(1)
    {
        rem = n1 % n2;
        if(rem==0) break;
        n1 = n2;
        n2 = rem;
    }

    printf("GCD = %d", n2);

    return 0;
}
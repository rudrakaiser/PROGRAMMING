#include<stdio.h>
int main()
{
    int n1, n2, a, b, temp;
    printf("Enter two number : ");
    scanf("%d %d", &a, &b);
    n1 = a;
    n2 = b;
    if(a<b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    while(b!=0)
    {
        temp = a%b;
        a = b;
        b = temp;
    }
    printf("GCD = %d\n", a);
    printf("LCM = %d\n", (n1*n2)/a);
    return 0;
}
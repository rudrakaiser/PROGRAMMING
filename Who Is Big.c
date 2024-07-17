#include<stdio.h>
#include<string.h>
int main()
{
    int n, i, a=0;
    scanf("%d", &n);
    char ch = getchar();
    char name[50];
    char big[50];
    for(i=1; i<=n; i++)
    {
        gets(name);
        if(strlen(name) > a)
        {
            strcpy(big, name);
            a = strlen(name);
        }
    }
    puts(big);
    return 0;
}

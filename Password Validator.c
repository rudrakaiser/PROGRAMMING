#include<stdio.h>
#include<ctype.h>
int main()
{
    int n, i, j, up, low, d, ss;
    scanf("%d", &n);
    char ch = getchar();
    char pass[100];
    for(i=1; i<=n; i++)
    {
        up = low = d = ss = 0;
        gets(pass);
        for(j=0; j<strlen(pass); j++)
        {
            if(isdigit(pass[j])) d++;
            else if(isupper(pass[j])) up++;
            else if(islower(pass[j])) low++;
            else ss++;
        }
        if(up!=0 && low!=0 && d!=0 && ss!=0) printf("Strong\n");
        else printf("Weak\n");
    }
    return 0;
}

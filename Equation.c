#include<stdio.h>
#include<math.h>
int main()
{
    double a;
    scanf("%lf", &a);
    a = pow(a,2) + sqrt(1/pow(a,3)) - pow(1000, (1/a)) - ( (100*a) / pow(2,a) );
    printf("%.3lf", a);
    return 0;
}

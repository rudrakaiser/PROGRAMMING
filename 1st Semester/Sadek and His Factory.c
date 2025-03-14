#include<stdio.h>
int main()
{
    double wheat_in, wheat_powder;
    scanf("%lf %lf", &wheat_in, &wheat_powder);

    double wheat_using = wheat_in * 0.93;
    double percentage = wheat_powder / wheat_using;
    double wheat_left = 5 * (wheat_in - wheat_using);
    double friday_wheat_powder = wheat_left * percentage;

    printf("%.3lf %% \n%.3lf kg", (percentage * 100), friday_wheat_powder);
    return 0;
}

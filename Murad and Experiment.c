#include<stdio.h>
int main()
{
    float height, velocity, time;
    printf("Height (m)     = ");
    scanf("%f", &height);
    printf("Velocity (m/s) = ");
    scanf("%f", &velocity);
    time = height / (float)velocity;
    printf("Time = %.2f s", time);
    return 0;
}

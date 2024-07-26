#include<stdio.h>
#include<math.h>
int main()
{
    float A, B, C, R;
    printf("A = ");
    scanf("%f", &A);
    printf("B = ");
    scanf("%f", &B);
    printf("C = ");
    scanf("%f", &C);
    R = sqrt( pow(A,2) + pow(B,2) + (2*A*B*cos(C*(M_PI/180))) );
    printf("%.2f", R);
    return 0;
}

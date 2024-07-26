#include<stdio.h>
#include<math.h>
int main()
{
    printf("1. sin()\n");
    printf("2. cos()\n");
    printf("3. tan()\n");
    printf("4. cosec()\n");
    printf("5. sec()\n");
    printf("6. cot()\n\n");
    double angle;
    char choice;
    printf("Enter your choice >>> ");
    scanf("%c", &choice);
    printf("Angle = ");
    scanf("%lf", &angle);
    if(choice=='1')
    {
        printf("\nsin(%.2lf) = %.3lf\n\n", angle, sin(angle*(M_PI/180)) );
    }
    else if(choice=='2')
    {
        printf("\ncos(%.2lf) = %.3lf\n\n", angle, cos(angle*(M_PI/180)) );
    }
    else if(choice=='3')
    {
        printf("\ntan(%.2lf) = %.3lf\n\n", angle, tan(angle*(M_PI/180)) );
    }
    else if(choice=='4')
    {
        printf("\ncosec(%.2lf) = %.3lf\n\n", angle, 1.0/sin(angle*(M_PI/180)) );
    }
    else if(choice=='5')
    {
        printf("\nsec(%.2lf) = %.3lf\n\n", angle, 1.0/cos(angle*(M_PI/180)) );
    }
    else if(choice=='6')
    {
        printf("\ncot(%.2lf) = %.3lf\n\n", angle, 1.0/tan(angle*(M_PI/180)) );
    }
    return 0;
}
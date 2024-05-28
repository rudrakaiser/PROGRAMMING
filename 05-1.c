#include<stdio.h>

int main()
{
	int hour, minute, second;
	
	printf("Enter Hours : ");
	scanf("%d", &hour);
	
	printf("Enter Minutes : ");
	scanf("%d", &minute);
	
	second = (hour*60*60) + (minute*60);
	
	printf("%d Hr %d Min = %d Sec", hour, minute, second);

	return 0;
}

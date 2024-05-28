#include<stdio.h>

int main()
{
	int year, month, day;
	
	printf("Enter Year : ");
	scanf("%d", &year);
	
	printf("Enter Month : ");
	scanf("%d", &month);
	
	day = (year*365) + (month*30);
	
	printf("%d Year %d Month = %d Days", year, month, day);

	return 0;
}

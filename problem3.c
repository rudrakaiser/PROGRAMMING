/*
	Write a C program to print day of week name using switch case.
*/

#include<stdio.h>
int main()
{
	int day;
	printf("Enter weekday : ");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
			printf("Saturday");
			break;
		case 2:
			printf("Sunday");
			break;
		case 3:
			printf("Monday");
			break;
		case 4:
			printf("Tuseday");
			break;
		case 5:
			printf("Wednesday");
			break;
		case 6:
			printf("Thursday");
			break;
		case 7:
			printf("Friday");
			break;
			
		default:
			printf("Invalid Input");
	}
	return 0;
}

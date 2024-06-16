#include<stdio.h>
int main()
{
	int day, week_day=0, week_space;
	
	printf("June 2024\n\n");
	printf("Su\tMo\tTu\tWe\tTh\tFr\tSa\n");
	printf("--------------------------------------------------\n");
	
	for(week_space=1; week_space<=6; week_space++)
	{
		printf("\t");
		week_day++;
	}
	
	for(day=1; day<=30; day++)
	{
		week_day++;
		
		printf("%02d\t",day);
		
		if(week_day%7==0)
		{
			printf("\n");
		}
	}
	return 0;
}

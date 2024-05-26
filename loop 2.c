#include<stdio.h>

void main()
{
	int start, interval, term, loop;
	
	printf("Series Start    : ");
	scanf("%d", &start);
	
	printf("Series Interval : ");
	scanf("%d", &interval);
	
	printf("Series Term     : ");
	scanf("%d", &term);
	
	for(loop=1; loop<=term; loop++)
	{
		printf("%d ", start);
		
		start += interval; // start = start + interval;
	}
}

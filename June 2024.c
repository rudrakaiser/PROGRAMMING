#include<stdio.h>
int main()
{
	int i, j, starting_gap=6, day=0;
	
	printf("\n\tJune 2024\n\n");
	printf("\tSu\tMo\tTu\tWe\tTh\tFr\tSa\n");
	printf("\t--------------------------------------------------\n");
	
	for(j=1; j<=starting_gap; j++)
	{
		printf("\t  ");
		day++;
	}
	
	for(i=1; i<=30; i++)
	{
		day++;
		printf("\t%02d", i);
		if(day%7==0)
		{
			printf("\n");
		}
	}
	
	return 0;
}

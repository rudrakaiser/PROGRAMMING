#include<stdio.h>

int main()
{
	int start_hr, start_min;
	
	printf("Event Starting Hour   : ");
	scanf("%d", &start_hr);
	
	printf("Event Starting Minute : ");
	scanf("%d", &start_min);
	
	int end_hr, end_min;
	
	end_hr = start_hr + 3;
	end_min = start_min;
	
	if(end_hr > 12)
	{
		end_hr = end_hr - 12;
		printf("\nThe EVENT will end at %d:%d", end_hr, end_min);
	}
	else
	{
		printf("\nThe EVENT will end at %d:%d", end_hr, end_min);
	}

	return 0;
}

#include<stdio.h>

int main()
{
	int loop_1, loop_2;
	
	for(loop_1=1; loop_1<=5; loop_1++)
	{
		for(loop_2=1; loop_2<=5; loop_2++)
		{
			printf("%d ", loop_1);
		}
		
		printf("\n");
	}

	return 0;
}
